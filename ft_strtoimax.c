/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoimax.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:40:37 by lmeubrin          #+#    #+#             */
/*   Updated: 2025/01/19 16:13:22 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <limits.h>
#include <stdlib.h>
#include "libft_full.h"

/*
DESCRIPTION
These  functions  are similar tostrtol(3) and strtoul(3).
The function converts the initial part of the string in nptr to a long integer
value according to the given base, which must be between 2 and 36 inclusive, 
or be the special value 0.

The  string  may  begin  with an arbitrary amount of white space 
(as determined by isspace(3)) followed by a single optional '+' or '-' sign.
If base is zero or 16, the string may then include a "0x" or "0X" prefix, and
the number will be read in base 16; 
otherwise, a zero base is taken as 10 (decimal) unless the next character 
is '0', in which case it is taken  as  8  (octal).

The  remainder  of  the string is converted to a long value in the obvious 
manner, stopping at the first character which is not a valid digit in the given
base. (In  bases  above  10,  the letter  'A'  in  either uppercase or
lowercase represents 10, 'B' represents 11, and so forth, with 'Z' representing
35.)

If endptr is not NULL, strtol() stores the address of the first invalid
character in  *endptr. If there were no digits at all, strtol() stores the
original value of nptr in *endptr (and returns 0).  In particular, if *nptr is
not '\0' but **endptr is  '\0'  on  return,  the  entire string is valid.

RETURN VALUE
On success, the converted value is returned.  If nothing was found to  convert,
zero  is  returned.  On overflow or underflow INTMAX_MAX or INTMAX_MIN or 
UINTMAX_MAX is returned, and errno is set to ERANGE.
*/

//really cool way to get the absolute value:
	//i += (sign ^ (sign >> 31)) - (sign >> 31);

#include "libft_full.h"

int	ft_strtoimax(const char *nptr, char **endptr, int base);
int	ft_atoi_base_e(const char *nptr, char **endptr, int base, int sign);
int	determine_sign(const char *nptr);
int	check_base(const char *nptr, char ***endprt, int base, int sign);

int	ft_strtoimax(const char *nptr, char **endptr, int base)
{
	int	i;
	int	sign;
	int	nb;

	errno = 0;
	i = ft_skip_whitespace(nptr);
	sign = determine_sign(&nptr[i]);
	if (sign)
		i++;
	else
		sign = 1;
	nptr = nptr + i;
	nb = check_base(nptr, &endptr, base, sign);
	if (endptr && *endptr == nptr)
		errno = EINVAL;
	return (nb);
}

int	check_base(const char *nptr, char ***endptr, int base, int sign)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	if (base == 0)
	{
		if (nptr[i] == '0' && (nptr[i + 1] == 'x' || nptr[i + 1] == 'X'))
			nb = ft_atoi_base_e(&nptr[i + 2], *endptr, 16, sign);
		else if (nptr[i] == '0')
			nb = ft_atoi_base_e(&nptr[i], *endptr, 8, sign);
		else
			nb = ft_atoi_base_e(&nptr[i], *endptr, 10, sign);
	}
	else if (base == 16)
	{
		if (nptr[i] == '0' && (nptr[i + 1] == 'x' || nptr[i + 1] == 'X'))
			i += 2;
		nb = ft_atoi_base_e(&nptr[i], *endptr, 16, sign);
	}
	else if (base >= 2 && base <= 36)
		nb = ft_atoi_base_e(&nptr[i], *endptr, base, sign);
	return (nb);
}

int	is_overflowing(int sign)
{
	int	result;

	errno = ERANGE;
	if (sign == 1)
		result = INT_MAX;
	else
		result = INT_MIN;
	return (result);
}

// returns int from nptr with base (on error endptr=wrong char)
int	ft_atoi_base_e(const char *nptr, char **endptr, int base, int sign)
{
	long	result;
	int		buffer;
	int		i;

	result = 0;
	i = 0;
	while (nptr[i])
	{
		buffer = ft_char_to_value(nptr[i], base);
		if (buffer == -1)
			break ;
		if ((result > (INT_MAX - buffer) / base && sign == 1) || \
			(result > (INT_MIN + buffer) / -base && sign == -1))
		{
			result = is_overflowing(sign);
			break ;
		}
		result = result * base + buffer;
		i++;
	}
	if (endptr)
		*endptr = (char *)(nptr + i);
	return ((int)(result * sign));
}

// if next char is -, returns -1, + returns 1, 
int	determine_sign(const char *nptr)
{
	if (*nptr == '+')
		return (1);
	if (*nptr == '-')
		return (-1);
	return (0);
}
