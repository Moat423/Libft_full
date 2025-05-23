/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_full.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:37:54 by lmeubrin          #+#    #+#             */
/*   Updated: 2025/05/05 13:39:02 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_FULL_H
# define LIBFT_FULL_H

# include "./lib_ft/libft.h"
# include "lib_printf/ft_printf.h"
# include "get_next_line/get_next_line.h"

int		ft_printf_char_array(char *const *array);
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
double	ft_strtod_s(char *str, int *error);
char	*ft_strstr(char *str, char *substr);
char	*ft_strjoin3(char const *s1, char const *s2, char const *s3);
int		ft_fprintf_char_array(int fd, char **array);
void	ft_strappend(char *string, char *appendix);
int		ft_istrchr(const char *s, char c);
int		ft_float_len(char *str);
int		ft_rperror(char *str);
int		ft_skip_space(const char *line, int i);
float	ft_strtof(char *str, int *error);
int		ft_isspace(char c);
//helpers2.c for strtoimax
int		ft_char_to_value(char c, int base);
float	ft_hypothenuse(float opposite, float adjacent);
void	ft_insertion_sort(float *arr, size_t size);

//fprintf
int		ft_fprintf(const int fd, const char *str, ...);
int		fstring_iteration(const int fd, const char *str, va_list args);
int		fconversion_specs(const int fd, const char *str, va_list args);

#endif // !LIBFT_FULL_H
