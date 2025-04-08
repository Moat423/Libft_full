/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertion_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:50:40 by lmeubrin          #+#    #+#             */
/*   Updated: 2025/04/08 11:54:46 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_insertion_sort(float *arr, size_t size)
{
	int		i;
	int		j;
	float	key;

	i = 1;
	while (i < size)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] >= key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}
