/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 18:27:17 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/01/02 19:15:35 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(int nb, int base)
{
	char *radix;

	radix = "0123456789abcdef";
	if (nb < 0 && base < 10)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= base)
	{
		ft_putnbr_base(nb / base, base);
		ft_putnbr_base(nb % base, base);
	}
	else
		ft_putchar(radix[nb]);
}
