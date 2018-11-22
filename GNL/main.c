/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <lyhamrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 16:11:02 by lyhamrou          #+#    #+#             */
/*   Updated: 2018/11/22 21:00:45 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "get_next_line.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	char		*line;
	const int	fd = open(av[1], O_RDONLY);

	(void)ac;
	if (fd == -1)
		return (0);
	//printf("fd  : %d\n", fd);
//	printf("GNL return : %d\n", get_next_line(fd, &line));
//	printf("GNL return : %d\n", get_next_line(fd, &line));
//	printf("GNL return : %d\n", get_next_line(fd, &line));
//	printf("GNL return : %d\n", get_next_line(fd, &line));
//	printf("GNL return : %d\n", get_next_line(fd, &line));
//	printf("GNL return : %d\n", get_next_line(fd, &line));
	//
	//
//	if (get_next_line(fd, &line) == 1)
//		printf("\n-->%s\n\n", line);
//	if (get_next_line(fd, &line) == 1)
//		printf("-->%s\n\n", line);
//	if (get_next_line(fd, &line) == 1)
//		printf("-->%s\n\n", line);
//	if (get_next_line(fd, &line) == 1)
//		printf("-->%s\n\n", line);
//	if (get_next_line(fd, &line) == 1)
//		printf("-->%s\n\n", line);
//	if (get_next_line(fd, &line) == 1)
//		printf("-->%s\n\n", line);


//	if (get_next_line(fd, &line) != 0 || get_next_line(fd, &line) != -1)
//	if (get_next_line(fd, &line) != 0 || get_next_line(fd, &line) != -1)
//		printf("-->%s\n", line);
//	if (get_next_line(fd, &line) != 0 || get_next_line(fd, &line) != -1)
//		printf("-->%s\n", line);
//	if (get_next_line(fd, &line) != 0 || get_next_line(fd, &line) != -1)
//		printf("-->%s\n", line);
	//write(1, line, ft_strlen(*line));
	//while (get_next_line(fd, &line) != 0 || get_next_line(fd, &line) != -1)
	//	printf("--->%s\n", line);
//	write(1, "-o-", 3);
//	
//
	while (get_next_line(fd, &line) != 0)
		printf("%s\n", line);
//	{
		//write(1, "voir main", 9);
		//printf("retour de gnl : %d\n", get_next_line(fd, &buf));
//		write(1, buf, BUFF_SIZE);
//	}
	if (close(fd) == -1)
		return (1);
	close(fd);
	return (0);
}
