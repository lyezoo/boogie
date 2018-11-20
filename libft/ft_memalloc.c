/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <lyhamrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 20:38:55 by lyhamrou          #+#    #+#             */
/*   Updated: 2018/11/16 00:29:55 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char	*buf;
	size_t	i;

	buf = NULL;
	i = 0;
	if (!(buf = (void *)malloc(sizeof(char) * size)))
		return (NULL);
	while (i < size)
		buf[i++] = 0;
	return ((void *)buf);
}
