/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:27:18 by lmeubrin          #+#    #+#             */
/*   Updated: 2025/01/19 15:58:15 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_full.h"

// does a strjoin, frees string and appendix, returns new string
void	ft_strappend(char *string, char *appendix)
{
	char	*new_string;

	if (!string)
		new_string = ft_strdup(appendix);
	new_string = ft_strjoin(string, appendix);
	free(string);
	free(appendix);
	if (new_string)
		string = new_string;
}
