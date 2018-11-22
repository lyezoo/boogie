/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <lyhamrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:11:22 by lyhamrou          #+#    #+#             */
/*   Updated: 2018/11/22 19:26:31 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*ft_strcsub(char *s, char c)
{
	char	*dest;
	size_t	i;

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
