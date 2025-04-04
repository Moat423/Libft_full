/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdoubleable.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:18:58 by lmeubrin          #+#    #+#             */
/*   Updated: 2025/03/19 15:36:59 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_full.h"

//returns 0 if number is floatable and 1 if not
int	ft_isdoubleable(char *str)
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
				return (1);
		}
		else if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}
