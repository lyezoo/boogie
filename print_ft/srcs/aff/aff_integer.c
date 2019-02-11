/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_integer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 20:54:46 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/02/11 03:03:30 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

int		convert_int_to_ll(char c, t_flg flg, va_list ap)
{
	int		i;

	i = 0;
	if (flg.t == 3)
	{
		if (c == 'd' || c == 'i')
			i = aff_di(flg, (__int128_t)va_arg(ap, long));
		else if (c == 'o')
			i = aff_o(flg, va_arg(ap, unsigned long));
		else if (c == 'u')
			i = aff_u(flg, va_arg(ap, unsigned long));
		else if (c == 'x')
			i = aff_x(flg, va_arg(ap, unsigned long));
		else if (c == 'X')
			i = aff_x_maj(flg, va_arg(ap, unsigned long));
	}
	if (flg.t == 4)
	{
		if (c == 'd' || c == 'i')
			i = aff_di(flg, (__int128_t)va_arg(ap, long long));
		else if (c == 'o')
			i = aff_o(flg, va_arg(ap, unsigned long long));
		else if (c == 'u')
			i = aff_u(flg, va_arg(ap, unsigned long long));
		else if (c == 'x')
			i = aff_x(flg, va_arg(ap, unsigned long long));
		else if (c == 'X')
			i = aff_x_maj(flg, va_arg(ap, unsigned long long));
	}
	return (i);
}

int		convert_int_to_hh(char c, t_flg flg, va_list ap)
{
	int		i;

	i = 0;
	if (flg.t == 1)
	{
		if (c == 'd' || c == 'i')
			i = aff_di(flg, (short)va_arg(ap, int));
		else if (c == 'o')
			i = aff_o(flg, (short)va_arg(ap, unsigned int));
		else if (c == 'u')
			i = aff_u(flg, (unsigned short)va_arg(ap, unsigned int));
		else if (c == 'x')
			i = aff_x(flg, (short)va_arg(ap, unsigned int));
		else if (c == 'X')
			i = aff_x_maj(flg, (short)va_arg(ap, unsigned int));
	}
	if (flg.t == 2)
	{
		if (c == 'd' || c == 'i')
			i = aff_di(flg, (char)va_arg(ap, int));
		else if (c == 'o')
			i = aff_o(flg, (char)va_arg(ap, unsigned int));
		else if (c == 'u')
			i = aff_u(flg, (char)va_arg(ap, unsigned int));
		else if (c == 'x')
			i = aff_x(flg, (char)va_arg(ap, unsigned int));
		else if (c == 'X')
			i = aff_x_maj(flg, (unsigned char)va_arg(ap, unsigned int));
	}
	return (i);
}

int		aff_integer(char c, t_flg flg, va_list ap)
{
	int		i;

	i = 0;
	if (flg.t == 0)
	{
		if (c == 'd' || c == 'i')
			i = aff_di(flg, va_arg(ap, int));
		else if (c == 'o')
			i = aff_o(flg, va_arg(ap, unsigned int));
		else if (c == 'u')
			i = aff_u(flg, va_arg(ap, unsigned int));
		else if (c == 'x')
			i = aff_x(flg, va_arg(ap, unsigned int));
		else if (c == 'X')
			i = aff_x_maj(flg, va_arg(ap, unsigned int));
	}
	else if (flg.t == 1 || flg.t == 2)
		i = convert_int_to_hh(c, flg, ap);
	else if (flg.t == 3 || flg.t == 4)
		i = convert_int_to_ll(c, flg, ap);
	return (i);
}
