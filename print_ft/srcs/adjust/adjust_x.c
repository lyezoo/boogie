/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adjust_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 19:44:36 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/02/11 02:58:31 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

t_aff	adjust_aff_x(t_aff aff, t_flg flg, unsigned long i)
{
	int		nod;

	nod = (int)number_of_digit_base_u((long)i, 16);
/*
	printf("--- FLG ---\n");
	printf("h = %d.\n", flg.h);
	printf("- = %d.\n", flg.less);
	printf("+ = %d.\n", flg.plus);
	printf("z = %d.\n", flg.z);
	printf("s = %d.\n", flg.s);
	printf("w = %d.\n", flg.w);
	printf("p = %d.\n", flg.p);
	printf("-------------- nod = %d.\n", nod);
*/

//======================================================================= sign1
	if (flg.less == 1 || (flg.z == 1 && flg.w > nod) || (nod >= flg.w || flg.p >= flg.w) || (flg.w > flg.p && flg.w > nod && flg.z == 1))
	{
		if (flg.h == 1)
			aff.sign1 = '0';
	}
//=============================================================================



//-------------------------------------------------------------------------- s1
	if (aff.sign1 == '\0' && flg.less == 0)
	{
		if (flg.w > nod && flg.w > flg.p)
		{
			if (flg.p >= nod && flg.z == 0)
				aff.s1 = flg.w - flg.p - (2 * flg.h);
			else if (flg.p < nod && flg.z == 0)
				aff.s1 = flg.w - nod - (2 * flg.h);
		}
	}
//-----------------------------------------------------------------------------



//========================================================================== z1
	if (flg.less == 0)
	{
		if (flg.w > nod && flg.w > flg.p)
		{
			if (flg.p > nod && flg.z == 1)
				aff.z1 = flg.w - flg.p;
			else if (flg.p < nod && flg.z == 1)
				aff.z1 = flg.w - nod;
		}
	}
//=============================================================================



//----------------------------------------------------------------------- sign2
	if (flg.less == 0 && aff.sign1 == '\0' && (aff.s1 != 0 || aff.z1 != 0))
	{
		if (flg.p < flg.w)
		{
			if (flg.h == 1)
				aff.sign2 = '0';
		}
	}
//-----------------------------------------------------------------------------




//-------------------------------------------------------------------------- s2
	if (flg.less == 1 && flg.w > flg.p)
	{
		aff.s2 = flg.w - (aff.sign1 != '\0') - aff.s1 - aff.z1 - (aff.sign2 != '\0') - nod - aff.z_arg;
		if (aff.s2 < 0)
			aff.s2 = 0;
	}
//-----------------------------------------------------------------------------

	if (aff.sign1 != '\0' || aff.sign2 != '\0')
	{
		aff.z1 = aff.z1 - 2;
		aff.s2--;
	}


/*
printf("--- AFF ---\n");
printf("sign1 = %c.\n", aff.sign1);
printf("s1    = %d.\n", aff.s1);
printf("z1    = %d.\n", aff.z1);
printf("sign2 = %c.\n", aff.sign2);
printf("arg   = %ld.\n", i);
printf("s2    = %d.\n", aff.s2);
printf("neg   = %d.\n", aff.neg);
printf("z_arg = %d.\n", aff.z_arg);
*/

	return (aff);
}


void	adjust_flg_n_aff_x(t_aff *aff, t_flg *flg, unsigned long *i)
{
	int		nod;

	nod = (int)number_of_digit_base_u(*i, 16);
	if (nod > flg->w && nod > flg->p && *i != 0)
	{
		flg->w = 0;
		flg->p = 0;
	}
	if (flg->less == 1 || flg->p != -1)
		flg->z = 0;
	if (flg->p >= flg->w && flg->p >= nod)
		flg->w = 0;
	if ((flg->p > flg->w) || (flg->p >= nod))
		aff->z_arg = flg->p - nod;
	*aff = adjust_aff_x(*aff, *flg, *i);
}
