/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtod_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:47:34 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/09/13 17:53:14 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_full.h"

//returns attempted ft_atod, and sets error to 1 if not doubleable, else error 0
double	ft_strtod_s(char *str, int *error)
{
	*error = 1;
	if (ft_isdoubleable(str))
		*error = 1;
	return (ft_atod(str));
}
