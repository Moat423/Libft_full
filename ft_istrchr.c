/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:28:25 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/11/16 16:33:24 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* DESCRIPTION
    The istrchr() function locates the first occurence of c 
(converted to a char) in the string pointed to by s. The terminating null 
character is considered to be part of the string; therefor if c is '\0',
the function locate the terminating '\0'.
RETURN VALUES
    The function strchr() return a pointer to the located character,
or NULL if the character does not appear in the string.
VARS
s: the string to search
c: the character to find
c_c: the int char converted to a char
*/

#include "libft_full.h"

char	*ft_istrchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if ((char) c == s[i])
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
