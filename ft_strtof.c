/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtof.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 14:33:24 by lmeubrin          #+#    #+#             */
/*   Updated: 2025/04/29 14:47:51 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_full.h"

static float	ft_after_point(char *str)
{
	float	pos;
	float	res_b;

	pos = 1;
	res_b = 0;
	while (*str <= '9' && *str >= '0')
	{
		pos /= 10;
		res_b += pos * (*str - '0');
		str++;
	}
	return (res_b);
}

float	ft_atof(char *str)
{
	float	res_a;
	int		sign;
	float	res_b;

	sign = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign = -1;
	res_a = 0;
	while (*str >= '0' && *str <= '9')
		res_a = res_a * 10 + *(str++) - '0';
	if (*(str++) != '.')
		return (res_a * sign);
	res_b = ft_after_point(str);
	return ((res_a + res_b) * sign);
}

//returns attempted ft_atof, and sets error to 1 if not floatable, else error 0
float	ft_strtof(char *str, int *error)
{
	*error = 0;
	if (ft_isdoubleable(str))
	{
		*error = 1;
		return (0);
	}
	return (ft_atof(str));
}
