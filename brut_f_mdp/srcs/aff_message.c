/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_message.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 00:10:27 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/01/31 17:10:24 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/brut.h"

void	aff_message(int n)
{
	long	x;

	x = ft_recursive_power(94, n);
	printf("We tri with %d char, there is %ld possibilities\n", n, x);
}
