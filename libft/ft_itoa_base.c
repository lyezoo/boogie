/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <lyhamrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:51:40 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/01/02 19:10:51 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		howmany_num(int n, int base)
{
	int			i;

	i = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > base - 1)
	{
		n = n / base;
		i++;
	}
	return (i);
}

char			*ft_itoa_base(int n, int base)
{
	char		*itoa;
	char		*radix;
	int			pow;
	long		nb;

	nb = n;
	radix = "0123456789abcdef";
	pow = howmany_num(n, base);
	if (!(itoa = (char *)malloc(sizeof(char) * (unsigned long)pow + 1)))
		return (NULL);
	itoa[pow--] = '\0';
	if (nb < 0 && base < 10)
	{
		itoa[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		*itoa = '0';
	while (nb > 0)
	{
		itoa[pow--] = radix[(nb % base)];
		nb = nb / base;
	}
	return (itoa);
}
