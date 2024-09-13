/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isfloat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:18:58 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/09/13 17:45:49 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//returns 1 if number is floatable and 0 if not
int	ft_isdoubleable(char *str)
{
	int	dotcount;
	int	i;

	i = 0;
	dotcount = 0;
	while (str[i])
	{
		if (str[i] == '.' )
		{
			if (dotcount == 0)
				dotcount++;
			else
				return (0);
		}
		else if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
