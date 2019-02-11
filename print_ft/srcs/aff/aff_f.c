/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 18:09:10 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/02/11 03:26:53 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

int		aff_f(t_flg flg, float f)
{
	t_aff	aff;
	int		i;

	initialize_aff(&aff);
	i = number_of_byts_write_f(aff, f);
//	putfloat_precis(f, flg.p);
	return (i);
}

int		number_of_byts_write_f(t_aff aff, float f)
{
	aff.s1++;
	f++;
	return (1);
}
