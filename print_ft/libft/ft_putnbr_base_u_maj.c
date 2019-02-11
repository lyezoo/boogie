/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_u_maj.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 01:53:00 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/02/11 02:42:29 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base_u_maj(unsigned long nb, unsigned int base)
{
	char	*radix;

	if (base < 2 || base > 16)
		return ;
	radix = "0123456789ABCDEF";
	if (nb >= (unsigned long)base)
	{
		ft_putnbr_base_u_maj(nb / (unsigned long)base, base);
		ft_putnbr_base_u_maj(nb % (unsigned long)base, base);
	}
	else
		ft_putchar(radix[nb]);
}
