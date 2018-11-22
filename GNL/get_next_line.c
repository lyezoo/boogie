/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <lyhamrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 20:00:47 by lyhamrou          #+#    #+#             */
/*   Updated: 2018/11/22 17:52:09 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"

char			*ft_strcsub(char *str, char c);

int				get_next_line(const int fd, char **line)
{
	static char	*str = "";
	int			ret;
	char		*buf;

	if (fd < 0 || fd > 4864 || !line)
		return (-1);
	buf = str;
	*line = str;
	ret = 1;
	buf = ft_memalloc(BUFF_SIZE);
	while ((ret = (int)read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf = ft_memalloc((size_t)ret + 1);
		buf[ret] = '\0';
		str = ft_strjoin(str, buf);
		if (ft_strchr(str, '\n') != NULL)
		{
			buf = str;
			str = ft_strcsub(str, '\n');
			*line = str;
			str = buf + ft_strlen(str) + 1;
			return (1);
		}
	}
	//free(buf);
	//free(str);
	return (0);
}
