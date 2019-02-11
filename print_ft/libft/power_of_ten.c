/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   power_of_ten.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 19:31:48 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/01/06 22:19:23 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include "../include/ft_printf.h"

/*
 * This fuction gives the power of ten the closest to n
 *
 * Exemple :	if n = 123,   pow = 100;
 *				if n = -1234, pow = 1000;
 *
*/

long		power_of_ten(long n)
{
	long	pow;
	size_t	i;

	i = 0;
	pow = 10;
	n < 0 ? n = -n : 1;
	if (n < 10)
		return (1);
	while (n / pow >= 10)
		pow *= 10;
	return (pow);
}
/*
int main(int ac, char **av)
{
	power_of_ten(ft_atoi(av[1]));
}*/
