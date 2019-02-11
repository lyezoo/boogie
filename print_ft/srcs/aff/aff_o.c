/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_o.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 16:47:30 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/02/09 02:31:55 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

//-----------------------------------------------------------------------------
int		aff_o(t_flg flg, unsigned long o)
{
	int		i;
	t_aff	aff;

	initialize_aff(&aff);
	adjust_flg_n_aff_o(&aff, &flg, &o);
	i = number_of_byts_write_o(aff, o);
	ft_putchar(aff.sign1);//----------------------- affichage :
	while (aff.s1 > 0 || aff.z1 > 0)
	{
		if (aff.z1 > 0)
			write(1, "0", 1);
		else if (aff.s1 > 0)
			write(1, " ", 1);
		aff.s1--;
		aff.z1--;
	}
	o == 0 && flg.p == 0 && flg.w > flg.p ? write(1, " ", 1) : 1;
	ft_putchar(aff.sign2);
	while (aff.z_arg > 0)
	{
		write(1, "0", 1);
		aff.z_arg--;
	}
	o != 0 ? ft_putnbr_base_u(o, 8) : (flg.p != 0 ? write(1, "0", 1) : 1);
	while (aff.s2 > 0)
	{
		write(1, " ", 1);
		aff.s2--;
	}
	return (i);
}
//-----------------------------------------------------------------------------




//-----------------------------------------------------------------------------
int		number_of_byts_write_o(t_aff aff, unsigned long o)
{
	int		sign;
	int		arg;
	int		padong;
	int		zero;

	sign = (aff.sign1 != '\0') + (aff.sign2 !='\0');
	arg = (int)number_of_digit_base(o, 8);
	padong = aff.s1 + aff.s2;
	zero = aff.z1 + aff.z_arg;
	return (sign + arg + padong + zero);
}
//-----------------------------------------------------------------------------
