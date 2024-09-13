/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_full.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:37:54 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/09/13 17:46:49 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_FULL_H
# define LIBFT_FULL_H

# include "./lib_ft/libft.h"
# include "lib_printf/ft_printf.h"
# include "get_next_line/get_next_line.h"

void	ft_printf_char_array(char *const *array, const int len);
void	ft_printf_int_array(const int *array, const int len);
int		ft_skip_whitespace(const char *str);
void	ft_sort_int_tab(int *tab, int size);
int		*ft_insertion_sort_int_list(const int *list, const int listlen);
int		ft_index_of_nb(int nb, int *list, int len);
int		ft_index_of_max(int *list, int len);
int		ft_index_of_min(int *list, int len);
int		ft_min_of_lst(int *list, int len);
int		ft_max_of_lst(int *list, int len);
int		min(int a, int b);
int		max(int a, int b);
int		ft_find_dup(int *list, int listlen);
int		ft_strtoimax(const char *nptr, char **endptr, int base);
int		determine_sign(const char *nptr);
double	ft_atod(char *str);
int		ft_isdoubleable(char *str);

#endif // !LIBFT_FULL_H