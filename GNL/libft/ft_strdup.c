/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <lyhamrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 20:25:20 by lyhamrou          #+#    #+#             */
/*   Updated: 2018/11/29 01:11:16 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strdup(char const *str)
{
	int		i;
	char	*dest;

	i = 0;
	dest = NULL;
	if (!(dest = ft_strnew(ft_strlen(str))))
		return (NULL);
	dest = ft_strcpy(dest, str);
	return (dest);
}
