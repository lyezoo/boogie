/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 21:27:27 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/01/21 17:13:38 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static long		howmany_num(long n, unsigned int base)
{
	long		i;

	i = 1;
	if (base < 2 || base > 16)
		return (0);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > (long)base - 1)
	{
		n = n / base;
		i++;
	}
	return (i);
}

char			*ft_ltoa_base(long n, unsigned int base)
{
	char		*ltoa;
	char		*radix;
	long		pow;

	radix = "0123456789abcdef";
	pow = howmany_num(n, base);
	if (!(ltoa = (char *)malloc(sizeof(char) * (unsigned long)pow + 1)))
		return (NULL);
	ltoa[pow--] = '\0';
	if (n < 0 && base <= 10)
	{
		ltoa[0] = '-';
		n = -n;
	}
	if (n == 0)
		*ltoa = '0';
	while (n > 0)
	{
		ltoa[pow--] = radix[(n % base)];
		n = n / base;
	}
	return (ltoa);
}
