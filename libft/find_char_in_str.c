/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_char_in_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 20:24:07 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/02/08 21:32:33 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		find_char_in_str(char c, char *str)
{
	int	i;

	i = 0;
	if (c && str)
	{
		while (str[i])
		{
			if (str[i] == c)
				return (1);
			++i;
		}
	}
	return (0);
}