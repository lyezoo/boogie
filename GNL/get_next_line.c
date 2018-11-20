/*   getnext_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <lyhamrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:49:36 by lyhamrou          #+#    #+#             */
/*   Updated: 2018/11/20 15:49:36 by lyhamrou         ###   ########.fr       */

#include "../libft/libft.h"
#include "../get_next_line.h"
#include <stdio.h>

int				get_next_line(const int fd, char **line)
{
	static char	*buf = "";
	int			ret;
	char		*tmp;
	int			size;

	if (fd < 0 || fd > 4864 || !line)
		return (-1);
	size = 0;
	ret = 1;
	tmp = buf;
	*line = buf;
	//printf("1adress of buf : %p    value of buf : %s\n\n", buf, buf);
	//printf("adress of tmp : %p    value of tmp : %s\n", tmp, tmp);
	while (ret > 0)//tant qu'on lit quelaue chose
	{
		size = size + BUFF_SIZE;
		tmp = ft_memalloc(size);
		ret = read(fd, tmp, BUFF_SIZE);
		tmp[BUFF_SIZE] = '\0';
		buf = ft_strjoin(buf, tmp);
		if (ft_strchr(buf, '\n') != NULL)
		{
			tmp = buf;
			buf = ft_strcsub(buf, '\n');
			*line = buf;
			//printf("adress of tmp : %p    value of tmp : %s\n", tmp, tmp);
			//printf("adress of line : %p   value of line : %s\n", line, *line);
			//printf("adress of buf : %p    value of buf : %s\n", buf, buf);
			//buf = ft_strchr(tmp, '\n') + 1;
			buf = tmp + ft_strlen(buf) + 1;
			//printf("adress of buf : %p    value of buf : %s", buf, buf);
			//ft_strdel(&tmp);
			return (1);
		}
	//write(1, "-o-", 3);
	}
	free(tmp);
	return (0);
}
