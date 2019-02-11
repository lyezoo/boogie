/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_struct.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 18:14:22 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/02/08 21:42:12 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		initialize_pl(t_pos_n_len *pl)
{
	pl->p = 0;
	pl->l = 0;
	return (0);
}

void		initialize_flg(t_flg *flg)
{
	flg->h = 0;
	flg->less = 0;
	flg->plus = 0;
	flg->z = 0;
	flg->s = 0;
	flg->w = 0;
	flg->p = -1;//p = 6 pour flag f
	flg->t = 0;
}

void		initialize_aff(t_aff *aff)
{
	aff->sign1 = '\0';
	aff->s1 = 0;
	aff->z1 = 0;
	aff->sign2 = '\0';
	aff->s2 = 0;
	aff->neg = 0;
	aff->z_arg = 0;
}

t_pos_n_len	error(t_pos_n_len pl)
{
	pl.p = -1;
	pl.l = -1;
	return (pl);
}
