/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_s.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 16:52:19 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/02/11 04:18:30 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

int		aff_s(t_flg flg, char *s)
{
	int		i;

	if (s == NULL)
		s = ft_strdup("(null)");
	if (flg.p != -1 && (int)ft_strlen(s) > flg.p)
		s = ft_strsub(s, 0, flg.p);
	i = number_of_byts_write_s(flg, s);
	if (flg.less == 1)
	{
		ft_putstr(s);
		while (flg.w - (int)ft_strlen(s) + 1 > 1)
		{
			write(1, " ", 1);
			flg.w--;
		}
	}
	else if (flg.less == 0)
	{
		while (flg.w > (int)ft_strlen(s))
		{
			if (flg.z == 1)
				write(1, "0", 1);
			else
				write(1, " ", 1);
			flg.w--;
		}
		ft_putstr(s);
	}
	return (i);
}

int		number_of_byts_write_s(t_flg flg, char *s)
{
	int		i;

	if (flg.p >= flg.w)
		flg.w = 0;
	if (flg.p < flg.w)
		flg.p = 0;
	if (flg.p > (int)ft_strlen(s))
		flg.p = (int)ft_strlen(s);
	i = flg.p + flg.w;
	return (i);
}
