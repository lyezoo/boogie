#include "lh_proto.h"

int		lim_neg(int n)
{
	ft_putchar('-');
	ft_putchar('2');
	n = n % 1000000000;
	return (n);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
		n = -lim_neg(n);
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 0 && n < 10)
		ft_putchar(n + '0');
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
