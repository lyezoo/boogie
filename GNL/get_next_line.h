/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <lyhamrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 20:01:59 by lyhamrou          #+#    #+#             */
/*   Updated: 2018/11/22 18:36:23 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "./libft/libft.h"
# include <stdlib.h>
# include <stdio.h>

# define BUFF_SIZE 1

typedef struct	s_line
{
	char			*str;
	struct s_line	*next;
}				t_line;

int				get_next_line(const int fd, char **line);

#endif
