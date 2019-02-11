/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_di.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 16:47:30 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/02/11 02:39:25 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

//-----------------------------------------------------------------------------
int		aff_u(t_flg flg, uintmax_t di)
{
	int		i;
	t_aff	aff;

	initialize_aff(&aff);
	adjust_flg_n_aff_u(&aff, &flg, &di);
	i = number_of_byts_write_u(aff, di);
	ft_putchar(aff.sign1);//----------------------- affichage :
	while (aff.s1 > 0 || aff.z1 > 0)
	{
		if (aff.z1 > 0)
			write(1, "0", 1);
		else if (aff.s1 > 0)
			write(1, " ", 1);
		aff.z1--;;
		aff.s1--;;
	}
	di == 0 && flg.p == 0 && flg.w > flg.p ? write(1, " ", 1) : 1;
	ft_putchar(aff.sign2);
	while (aff.z_arg > 0)
	{
		write(1, "0", 1);
		aff.z_arg--;
	}
	di != 0 ? ft_putnbr_lu(di) : (flg.p == -1 ? write(1, "0", 1) : 1);
	while (aff.s2 > 0)
	{
		write(1, " ", 1);
		aff.s2--;
	}
	return (i);
}
//-----------------------------------------------------------------------------




//-----------------------------------------------------------------------------
int		number_of_byts_write_u(t_aff aff, uintmax_t di)
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
