#include "lh_proto.h"

int		ten_pow(int n)
{
	int pow_ten;

	pow_ten = 1;
	while (n >= 10 || n <= -10)
	{
		pow_ten = pow_ten * 10;
		n = n / 10;
	}
	return (pow_ten);
}

int		len_n(int n)
{
	int i;

	i = 0;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char *str;
	int i;
	int pow_ten;
	long nb;

	str = NULL;
	i = 0;
	nb = n;
	pow_ten = ten_pow(nb);
	if (!(str = (char *)malloc(sizeof(char) * len_n(nb))))
		return (NULL);
	if (nb < 0)
	{
		str[i++] = '-';
		nb = -nb;
	}
	while (pow_ten > 0)
	{
		str[i++] = (nb / pow_ten) + '0';
		nb = nb % pow_ten;
		pow_ten /= 10;
	}
	str[i] = '\0';
	return (str);
}
