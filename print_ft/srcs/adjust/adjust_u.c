/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adjust_di.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 17:18:01 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/02/11 02:39:10 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

t_aff	adjust_aff_u(t_aff aff, t_flg flg, uintmax_t i)
{
	int		nod;

	nod = (int)number_of_digit((long)i);
/*
	printf("--- FLG ---\n");
	printf("- = %d.\n", flg.less);
	printf("+ = %d.\n", flg.plus);
	printf("z = %d.\n", flg.z);
	printf("s = %d.\n", flg.s);
	printf("w = %d.\n", flg.w);
	printf("p = %d.\n", flg.p);
	printf("-------------- nod = %d.\n", nod);
*/

//======================================================================= sign1
	if ((flg.less == 1 && (aff.neg == 1 || flg.plus == 1 || flg.s == 1)) || (aff.neg == 1 && flg.z == 1 && flg.w > nod) || (aff.neg + nod >= flg.w || aff.neg + flg.p >= flg.w) || (flg.w > flg.p && flg.w > nod && i > 0 && (flg.z == 1 && flg.s == 1)))
	{
		if (aff.neg == 1)
		{
			aff.sign1 = '-';
			aff.neg = 0;
		}
		else if (aff.neg == 0 && flg.plus == 1)
			aff.sign1 = '+';
		else if (aff.neg == 0 && flg.plus == 0 && flg.s == 1)
			aff.sign1 = ' ';
	}// les - on l'air d'etre gere
	else if (flg.w < flg.p || flg.w < nod || (flg.plus == 1 && flg.w > flg.p && flg.w < nod))
	{
		if (aff.neg == 1)
		{
			aff.sign1 = '-';
			aff.neg = 0;
		}
		if (aff.neg == 0 && flg.plus == 1)
			aff.sign1 = '+';
		if (aff.neg == 0 && flg.plus == 0 && flg.s == 1)
			aff.sign1 = ' ';
	}
//=============================================================================



//-------------------------------------------------------------------------- s1
	if (aff.sign1 == '\0' && flg.less == 0)
	{
		if (flg.w > nod && flg.w > flg.p)
		{
			if (flg.p >= nod && flg.z == 0)
				aff.s1 = flg.w - flg.p - aff.neg;
			else if (flg.p < nod && flg.z == 0)
				aff.s1 = flg.w - nod - aff.neg;
			if ((flg.s == 1 || flg.plus == 1) && aff.neg == 0)
				aff.s1--;
		}
	}
//-----------------------------------------------------------------------------



//========================================================================== z1
	if (flg.less == 0)
	{
		if (flg.w > nod && flg.w > flg.p)
		{
			if (flg.p > nod && flg.z == 1)
				aff.z1 = flg.w - flg.p - aff.neg;
			else if (flg.p < nod && flg.z == 1)
				aff.z1 = flg.w - nod - aff.neg;
			if (((flg.s == 1 || flg.plus == 1) && aff.neg == 0) || aff.sign1 != '\0')
				aff.z1--;
		}
	}
//=============================================================================



//----------------------------------------------------------------------- sign2
	if (flg.less == 0 && aff.sign1 == '\0' && (aff.s1 != 0 || aff.z1 != 0))
	{
		if (flg.p < flg.w)
		{
			if (aff.neg == 1)
			{
				aff.sign2 = '-';
				aff.neg = 0;
			}
			else if (aff.neg == 0 && flg.plus == 1)
				aff.sign2 = '+';
			else if (aff.neg == 0 && flg.plus == 0 && flg.s == 1)
				aff.sign2 = ' ';
		}
	}
//-----------------------------------------------------------------------------




//-------------------------------------------------------------------------- s2
	if (flg.less == 1 && flg.w > flg.p + flg.plus && flg.w > flg.p + aff.neg)
	{
		aff.s2 = flg.w - (aff.sign1 != '\0') - aff.s1 - aff.z1 - (aff.sign2 != '\0') - nod - aff.z_arg;
	}
//-----------------------------------------------------------------------------



/*
printf("--- AFF ---\n");
printf("sign1 = %c.\n", aff.sign1);
printf("s1    = %d.\n", aff.s1);
printf("z1    = %d.\n", aff.z1);
printf("sign2 = %c.\n", aff.sign2);
printf("arg   = %ju.\n", i);
printf("s2    = %d.\n", aff.s2);
printf("neg   = %d.\n", aff.neg);
printf("z_arg = %d.\n", aff.z_arg);
*/



	return (aff);
}


void	adjust_flg_n_aff_u(t_aff *aff, t_flg *flg, uintmax_t *i)
{
	int		nod;

	nod = (int)number_of_digit((long)*i);
	if (nod > flg->w && nod > flg->p && *i != 0)
	{
		flg->w = 0;
		flg->p = 0;
	}
	if (flg->less == 1 || flg->p != -1)
		flg->z = 0;
	if (flg->plus == 1 || flg->s == 1)
	{
		flg->plus = 0;
		flg->s = 0;
	}
	if (flg->p >= flg->w && flg->p >= nod)
		flg->w = 0;
	if (flg->p > nod)
	{
		aff->z_arg = flg->p - nod;
		*i == 0 ? aff->z_arg++ : 1;
	}//il passe pas en negatif apres le condition suivante
	*aff = adjust_aff_u(*aff, *flg, *i);
}
