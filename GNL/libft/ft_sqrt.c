/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 03:23:07 by lyhamrou          #+#    #+#             */
/*   Updated: 2018/11/13 20:55:22 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 2;
	if (nb == 1)
		return (1);
	if (nb >= 4 && nb <= 2147483647)
	{
		while (sqrt <= 46340)
		{
			if (sqrt * sqrt == nb)
				return (sqrt);
			sqrt++;
		}
	}
	return (0);
}
