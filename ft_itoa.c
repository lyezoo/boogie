#include "lh_proto.h"

int		lim_neg(int n)
{
	int i;

	i = 0;
	
	return (n);
}

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

	str = NULL;
	i = 0;
	pow_ten = ten_pow(n);
	if (!(str = (char *)malloc(sizeof(char) * len_n(n))))
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
