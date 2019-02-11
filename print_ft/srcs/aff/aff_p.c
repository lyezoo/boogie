/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_x.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 03:49:20 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/02/11 04:06:09 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

//-----------------------------------------------------------------------------
int		aff_p(t_flg flg, unsigned long x)
{
	int		i;
	t_aff	aff;

	initialize_aff(&aff);
	adjust_flg_n_aff_x(&aff, &flg, &x);
	i = number_of_byts_write_p(aff, x);
	aff.s1 == 0 && aff.z1 == 0 ? write(1, "0x", 2) && (aff.sign1 = '#') : 1;
//	aff.s1 = aff.s1 - 2;
//	aff.z1 = aff.z1 - 2;
	while (aff.s1 > 0 || aff.z1 > 0)
	{
		if (aff.z1 > 0)
			write(1, "0", 1);
		else if (aff.s1 > 0)
			write(1, " ", 1);
		aff.s1--;
		aff.z1--;
	}
	x == 0 && flg.p == 0 && flg.w > flg.p ? write(1, " ", 1) : 1;
	(aff.s1 != 0 || aff.z1 != 0) && aff.sign1 != '#' ? write(1, "0x", 2) : 1;
	while (aff.z_arg > 0)
	{
		write(1, "0", 1);
		aff.z_arg--;
	}
	x != 0 ? ft_putnbr_base_u(x, 16) : (flg.p != 0 ? write(1, "0", 1) : 1);
	aff.s2 = aff.s2 - 2;
	while (aff.s2 > 0)
	{
		write(1, " ", 1);
		aff.s2--;
	}
	return (i);
}
//-----------------------------------------------------------------------------




//-----------------------------------------------------------------------------
int		number_of_byts_write_p(t_aff aff, unsigned long x)
{
	int		sign;
	int		arg;
	int		padong;
	int		zero;

	sign = (2 * (aff.sign1 != '\0')) + (2 * (aff.sign2 !='\0'));
	arg = (int)number_of_digit_base(x, 16);
	padong = aff.s1 + aff.s2;
	zero = aff.z1 + aff.z_arg;
	return (sign + arg + padong + zero);
}
//-----------------------------------------------------------------------------
