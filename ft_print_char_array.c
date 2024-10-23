/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char_array.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:35:46 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/10/23 14:55:27 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_full.h"

//while loop to print out charlist to test it
int	ft_printf_char_array(char *const *array)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (array[i])
	{
		count += ft_printf("n%d: %s\n", i, array[i]);
		i++;
	}
	return (count);
}
