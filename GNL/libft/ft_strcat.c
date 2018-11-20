/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <lyhamrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 20:31:45 by lyhamrou          #+#    #+#             */
/*   Updated: 2018/11/12 23:39:53 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char const *src)
{
	int	i;

	i = ft_strlen(src) + ft_strlen(dest);
	while (*dest)
		dest++;
	while (*src)
		*(dest)++ = *(src)++;
	*dest = '\0';
	return (&dest[-i]);
}
