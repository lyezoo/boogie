/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <lyhamrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 13:49:48 by lyhamrou          #+#    #+#             */
/*   Updated: 2018/11/22 18:55:03 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ne pas oublie le header


#include "libft/libft.h"
#include "get_next_line.h"

char		*ft_strcsub(char const *str, char c);

int			get_next_line(int const fd, char **line)
{
	static char	*str = "";
	char		*buf;
	char		*adress;
	int			ret;
	int			size;

	*line = str;
	size = 0;
	buf = ft_memalloc(BUFF_SIZE + 10000);
	if (!fd || !line)
		return (-1);
	while ((ret = (int)read(fd, buf, BUFF_SIZE)) > 0)
	{
		size = size + ret;
		buf[ret + 1] = '\0';
		str = ft_strdup(str);
		str = ft_strjoin(str, buf);
		if (ft_strchr(str, '\n') != NULL)
		{
			buf = str;
			str = ft_strcsub(str, '\n');
			*line = str;
			str = ft_strchr(buf, '\n') + 1;
			return (ret != BUFF_SIZE ? 0 : 1);
		}
	}
	free(buf);
	return (4);
}
//	printf("ret : %d\n ", ret);
//	printf("adress of str ap sub    : %p    value of str : %s\n", str, str);
//	printf("adress of buf : %p    value of buf : %s\n", buf, buf);
//	printf("adress of str : %p    value of str : %s\n", str, str);
//	printf("adress of line : %p   value of line : %s\n", line, *line);
//	printf("adress of buf : %p    value of buf : %s\n\n", buf, buf);
//	printf("adress of str ap address: %p    value of str : %s\n", str, str);
//	printf("adress of line          : %p   value of line : %s\n", line, *line);
//	printf("adress of str ap sub    : %p    value of str : %s\n", str, str);
//	printf("adress of str av sub    : %p    value of str : %s\n", str, str);
//	printf("adress of buf ap read   : %p    value of buf : %s\n", buf, buf);
//	printf("\n\nadress of str debut     : %p    value of str : %s\n", str, str);
//	printf("adress of buf av read   : %p    value of buf : %s\n", buf, buf);
