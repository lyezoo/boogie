/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <lyhamrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:11:22 by lyhamrou          #+#    #+#             */
/*   Updated: 2018/11/29 21:37:26 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*dest;

	i = 0;
	if (!s)
		return (NULL);
	if (!(dest = ft_memalloc(len + 1)))
		return (NULL);
	while (i < len)
		dest[i++] = s[start++];
	dest[i] = '\0';
	return (dest);
}
