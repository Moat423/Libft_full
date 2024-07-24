# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/02 16:40:31 by lmeubrin          #+#    #+#              #
#    Updated: 2024/07/02 16:54:41 by lmeubrin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL := /bin/bash
MAKEFLAGS += --warn-undefined-variables
.ONESHELL:

CC := cc
CFLAGS := -Werror -Wall -Wextra -I.
NAME := libft.a

LIB_FT_DIR := lib_ft
LIB_PRINTF_DIR := lib_printf
GNL_DIR := get_next_line

LIB := ar
LIBFLAGS := -rcs

LIB_FT := $(LIB_FT_DIR)/libft.a
#LIB_FT_SRCS := $(shell find $(LIB_FT_DIR) -name '*.c')
#LIB_FT_OBJS := $(LIB_FT_SRCS:%.c=%.o)

LIB_PRINTF := $(LIB_PRINTF_DIR)/libftprintf.a
#LIB_PRINTF_SRCS := $(shell find $(LIB_PRINTF_DIR) -name '*.c')
#LIB_PRINTF_OBJS := $(LIB_PRINTF_SRCS:%.c=%.o)

GNL_SRCS := $(GNL_DIR)/get_next_line.c $(GNL_DIR)/get_next_line_utils.c \
			#$(GNL_DIR)/get_next_line.h

GNL_OBJS := $(GNL_SRCS:%.c=%.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(LIB_FT) $(LIB_PRINTF) $(GNL_OBJS)
	ar rcs $@ $(LIB_FT) $(LIB_PRINTF) $(GNL_OBJS)

$(LIB_FT):
	$(MAKE) -C $(LIB_FT_DIR)

$(LIB_PRINTF):
	$(MAKE) -C $(LIB_PRINTF_DIR)

#$(GNL_OBJS): $(GNL_SRCS)
#	$(CC) $(CFLAGS) -c $(GNL_SRCS) -o $(GNL_OBJS)

$(GNL_OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(GNL_OBJS)
	$(MAKE) -C $(LIB_FT_DIR) clean
	$(MAKE) -C $(LIB_PRINTF_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIB_FT_DIR) fclean
	$(MAKE) -C $(LIB_PRINTF_DIR) fclean

re: fclean all

