/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hypothenuse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 12:20:27 by lmeubrin          #+#    #+#             */
/*   Updated: 2025/03/31 12:22:54 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>

float	ft_hypothenuse(float opposite, float adjacent)
{
	return (sqrtf((opposite * opposite) + (adjacent * adjacent)));
}
