/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_di.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 16:47:30 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/02/09 06:01:34 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

//-----------------------------------------------------------------------------
int		aff_di(t_flg flg, long long di)
{
	int		i;
	t_aff	aff;

	i = 0;
	initialize_aff(&aff);
	adjust_flg_n_aff_di(&aff, &flg, &di);
	ft_putchar(aff.sign1);//----------------------- affichage :
	while (aff.s1 > i || aff.z1 > i)
	{
		if (aff.z1 > 0)
			write(1, "0", 1);
		else if (aff.s1 > 0)
			write(1, " ", 1);
		++i;
	}
	di == 0 && flg.p == 0 && flg.w > flg.p ? write(1, " ", 1) : 1;
	ft_putchar(aff.sign2);
	i = 0;
	while (aff.z_arg > i)
	{
		write(1, "0", 1);
		++i;
	}
	di != 0 ? ft_putnbr_l(di) : (flg.p == -1 ? write(1, "0", 1) : 1);
	i = 0;
	while (aff.s2 > i)
	{
		write(1, " ", 1);
		++i;
	}
	return (number_of_byts_write_di(aff, di));
}
//-----------------------------------------------------------------------------




//-----------------------------------------------------------------------------
int		number_of_byts_write_di(t_aff aff, long long di)
{
	int		sign;
	int		arg;
	int		padding;
	int		zero;

	sign = (aff.sign1 != '\0') + (aff.sign2 !='\0');
	arg = (int)number_of_digit(di);
	padding = aff.s1 + aff.s2;
	zero = aff.z1 + aff.z_arg;
	return (sign + arg + padding + zero);
}
//-----------------------------------------------------------------------------
