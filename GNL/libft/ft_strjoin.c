/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <lyhamrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 20:24:50 by lyhamrou          #+#    #+#             */
/*   Updated: 2018/11/21 17:43:15 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	int			i;
	int			x;
	char		*str;

	i = 0;
	x = ft_strlen(s1);
	if (!s1 || !s2)
		return (NULL);
	if (!(str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1)))
		return (NULL);
	str = (char *)s1;
	str = ft_strcat(str, s2);
	return (str);
}
