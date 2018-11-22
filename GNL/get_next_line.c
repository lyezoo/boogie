/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <lyhamrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 19:04:18 by lyhamrou          #+#    #+#             */
/*   Updated: 2018/11/22 20:57:07 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"

char		*ft_strcsub(char *s, char c)
{
	char		*dest;
	size_t		i;

	i = 0;
	dest = NULL;
	if (!s)
		return (NULL);
	while (s[i] && s[i] != c)
		i++;
	if (i == ft_strlen(s))
		return (NULL);
	if (!(dest = (char *)malloc(i + 1)))
		return (NULL);
	i = 0;
	while (s[i] != c)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int			get_next_line(int const fd, char **line)
{
	static char	*str = "";
	char		*buf;
	int			ret;

	*line = str;
	buf = ft_memalloc(BUFF_SIZE + 1);
	if (fd > 4864 || fd < 0 || !line)
		return (-1);
	while ((ret = (int)read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret + 1] = '\0';
		str = ft_strdup(str);
		str = ft_strjoin(str, buf);
		if (ft_strchr(str, '\n') != NULL)
		{
			str = ft_strcsub(str, '\n');
			*line = str;
			str = ft_strchr(buf, '\n') + 1;
			return (ret != BUFF_SIZE ? 0 : 1);
		}
	}
	free(buf);
	return (0);
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
