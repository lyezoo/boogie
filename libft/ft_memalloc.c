/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <lyhamrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 20:38:55 by lyhamrou          #+#    #+#             */
/*   Updated: 2018/12/14 17:07:47 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_memalloc(size_t size)
{
	void	*buf;

	buf = NULL;
	if (!(buf = (void *)malloc(size)))
		return (NULL);
	ft_memset(buf, 0, size);
	return (buf);
}
