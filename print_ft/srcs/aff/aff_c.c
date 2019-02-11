/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_c.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 16:48:38 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/02/08 20:13:58 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

int		aff_c(t_flg flg, int c)
{
	if (flg.less == 1)
	{
		ft_putchar(c);
		while (flg.w > 1)
		{
			write(1, " ", 1);
			flg.w--;
		}
	}
	else if (flg.less == 0)
	{
		while (flg.w > 1)
		{
			flg.z == 0 ? write(1, " ", 1) : write(1, "0", 1);
			flg.w--;
		}
		ft_putchar(c);
	}
	return (number_of_byts_write_c(flg));
}


int		number_of_byts_write_c(t_flg flg)
{
	int		i;

	i = 0;
	flg.w > flg.p ? (flg.p = 0) : 1;
	flg.w < flg.p ? (flg.w = 0) : 1;
	if (flg.w > 1 || flg.p > 1)
	{
		i = flg.w + flg.p + 1;
	}
	return (i);
}
