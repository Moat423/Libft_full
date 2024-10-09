/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:27:18 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/10/09 12:27:55 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_full.h"

// does a strjoin, frees string and appendix, returns new string
char	*ft_strappend(char *string, char *appendix)
{
	char	*new_string;

	new_string = ft_strjoin(string, appendix);
	free(string);
	free(appendix);
	if (new_string)
		string = new_string;
	free(new_string);
	return (NULL);
}
