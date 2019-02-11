/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <lyhamrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 20:25:20 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/01/22 21:17:57 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char		*ft_strdup(char const *str)
{
	int		i;
	char	*dest;

	i = 0;
	dest = NULL;
	if (str)
	{
		if (!(dest = ft_strnew(ft_strlen(str))))
			return (NULL);
		dest = ft_strcpy(dest, str);
		return (dest);
	}
	else
		return (NULL);
}
