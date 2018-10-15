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
	if (!(str = (char *)malloc(sizeof(char) * (pow_ten + 1))))
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
