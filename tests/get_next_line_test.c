/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:56:01 by lmeubrin          #+#    #+#             */
/*   Updated: 2025/05/06 18:18:26 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_full.h"
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	*line;
	int		fd;
	int		fd2;
	int		i;
	int		j = 1;

	fd = open("bumps.rt", O_RDONLY);
	fd2 = open("testfile2", O_RDONLY);
	if (fd == -1)
		return (EXIT_FAILURE);
	if (fd2 == -1)
		return (EXIT_FAILURE);
	line = get_next_line(fd);
	i = 1;
	while (i < 4)
	{
		printf("first file:\n");
		printf("%d:'%s'\n", i, line);
		line = get_next_line(fd2);
		printf("second file:\n");
		printf("%d:'%s'\n", j, line);
		j++;
		i++;
		line = get_next_line(fd);
	}
	return (EXIT_SUCCESS);
}
