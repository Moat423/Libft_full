/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_spaces.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 11:01:21 by lmeubrin          #+#    #+#             */
/*   Updated: 2025/03/19 11:01:27 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//returns index increased by the ammount of spaces that follow the index given
int	ft_skip_space(const char *line, int i)
{
	while (line[i] == ' ')
		++i;
	return (i);
}
