/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <lyhamrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 16:11:02 by lyhamrou          #+#    #+#             */
/*   Updated: 2018/12/20 18:09:14 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	char		*line;
	char		*line2;
	const int	fd = open(av[1], O_RDONLY);
	const int	fd2 = open(av[2], O_RDONLY);

	(void)ac;
	if (fd == -1)
		return (0);
/*	printf("fd  : %d\n", fd);
	printf("GNL return : %d\n", get_next_line(fd, &line));
	printf("GNL return : %d\n", get_next_line(fd, &line));
	printf("GNL return : %d\n", get_next_line(fd, &line));
	printf("GNL return : %d\n", get_next_line(fd, &line));
	printf("GNL return : %d\n", get_next_line(fd, &line));
	printf("GNL return : %d\n", get_next_line(fd, &line));
*/

	if (get_next_line(fd, &line) == 1 || get_next_line(fd, &line) == 0)
	{
		printf("\n-->%s\n\n", line);
		free(line);
	}
	if (get_next_line(fd2, &line2) == 1 || get_next_line(fd2, &line2) == 0)
	{
		printf("\n-->%s\n\n", line2);
		free(line2);
	}
	if (get_next_line(fd, &line) == 1 || get_next_line(fd, &line) == 0)
	{
		printf("\n-->%s\n\n", line);
		free(line);
	}
	if (get_next_line(fd2, &line2) == 1 || get_next_line(fd2, &line2) == 0)
	{
		printf("\n-->%s\n\n", line2);
		free(line2);
	}
	if (get_next_line(fd, &line) == 1 || get_next_line(fd, &line) == 0)
	{
		printf("\n-->%s\n\n", line);
		free(line);
	}
	if (get_next_line(fd2, &line2) == 1 || get_next_line(fd2, &line2) == 0)
	{
		printf("\n-->%s\n\n", line2);
		free(line2);
	}

/*
	while (get_next_line(fd, &line))// == 1 || get_next_line(fd2, &line2) == 1)
	{
		printf("%s\n", line);
//		printf("%s\n", line2);
		free(line);
//		free(line2);
	}
*/
	if (close(fd) == -1)
		return (1);
	close(fd);
	getchar();
	return (0);
}
