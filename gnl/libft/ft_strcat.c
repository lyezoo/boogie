/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <lyhamrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 20:31:45 by lyhamrou          #+#    #+#             */
/*   Updated: 2018/11/28 02:34:12 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strcat(char *dest, char const *src)
{
	char *tmp;

	tmp = dest;
	tmp = tmp + ft_strlen(dest);
	while (*src)
		*tmp++ = *src++;
	*tmp = '\0';
	return (dest);
}
