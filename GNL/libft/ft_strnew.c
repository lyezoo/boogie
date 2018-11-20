/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <lyhamrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:08:17 by lyhamrou          #+#    #+#             */
/*   Updated: 2018/11/12 20:24:08 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	str = NULL;
	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	while (i <= size)
		str[i++] = '\0';
	return (str);
}
