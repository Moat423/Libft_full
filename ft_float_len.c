/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 10:54:57 by lmeubrin          #+#    #+#             */
/*   Updated: 2025/03/19 15:04:00 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_full.h"

// returns index of first invalid character not belonging to a float
int	ft_float_len(char *str)
{
	int	dotcount;
	int	i;

	dotcount = 0;
	i = ft_skip_whitespace(str);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] == '.' )
		{
			if (dotcount == 0)
				dotcount++;
			else
				return (i);
		}
		else if (str[i] < '0' || str[i] > '9')
			return (i);
		i++;
	}
	return (i);
}
