/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_to_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 22:16:11 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/01/28 10:19:59 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include "../include/ft_printf.h"

char	*char_to_str(char c)
{
	char	*str;

	if (!(str = (char *)malloc(2)))
		return (NULL);
	str[0] = c;
	str[1] = '\0';
	return (str);
}
