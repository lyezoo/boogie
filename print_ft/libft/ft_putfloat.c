/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 14:43:05 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/02/08 21:35:48 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putfloat(float nb)
{
	long	entier;
	long	digit;
	float	decimal;

	digit = 0;
	ft_putnbr_l((entier = (long)nb));
	decimal = nb - entier;
	write(1, ".", 1);
	entier = 0;
	while (digit < 7)
	{
		decimal = 10 * decimal;
		++digit;
	}
	digit = 1000000;
	entier = (long)decimal;
	while (entier / digit == 0)
	{
		digit /= 10;
		write(1, "0", 1);
	}
	(entier % 10) - 5 < 0 ? ft_putnbr_l(entier / 10) : ft_putnbr_l((entier / 10) + 1);
}
