/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <lyhamrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 20:32:38 by lyhamrou          #+#    #+#             */
/*   Updated: 2018/11/12 20:32:44 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static int		lim_neg(int n, int fd)
{
	ft_putchar_fd('-', fd);
	ft_putchar_fd('2', fd);
	n = n % 1000000000;
	return (n);
}

void			ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		n = -lim_neg(n, fd);
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 0 && n < 10)
		ft_putchar_fd(n + '0', fd);
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
