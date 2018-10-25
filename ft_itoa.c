#include "lh_proto.h"

int		ft_recursive_power(int nb, int power)
{
	int n;

	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	n = n * (ft_recursive_power(nb, power - 1));
	return (n);
}

int		powr(int n)
{
	int i;

	i = 1;
	while (n > 9 || n < -9)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*fft_itoa(int n)
{
	char *str;
	int i;
	int pow_ten;

	str = NULL;
	i = 0;
	pow_ten = powr(n);
	if (!(str = (char *)malloc(sizeof(char) * (pow_ten + 1))))
		return (NULL);
	if (n < 0)
	{
		str[i++] = '-';
		n = -n;
	}
	while (pow_ten > 0)
	{
		str[i++] = (n / pow_ten) + '0';
		n = n % pow_ten;
		pow_ten /= 10;
	}
	str[i] = '\0';
	return (str);
}

char *ft_itoa(int n)
{
	int i;
	char *nb;
	int pow;

	i = 0;
	pow = powr(n);
	nb = NULL;
	if (!(nb = (char *)malloc(sizeof(char) * (pow + 1))))
		return (NULL);
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		nb[i++] = '-';
		n = -n;
	}
	pow--;
	while (pow >= 0)
	{
		nb[i++] = n / (ft_recursive_power(10, pow)) + '0';
		n = n % ft_recursive_power(10, pow);
		pow--;
	}
	return (nb);
}
