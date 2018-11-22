/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <lyhamrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:11:22 by lyhamrou          #+#    #+#             */
/*   Updated: 2018/11/21 19:17:21 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	combien(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char		*ft_strcsub(char const *s, char c)
{
	size_t	i;
	char	*dest;

	dest = NULL;
	i = 0;
	if (!s)
		return (NULL);
	if (!(dest = (char *)malloc(combien(s, c) + 1)))
		return (NULL);
	while (s[i] != c)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
