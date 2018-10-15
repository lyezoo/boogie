#include "lh_proto.h"

int		ft_atoi(char *str)
{
	int nbr;
	int neg;

	nbr = 0;
	neg = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v' || *str =='\f' || *str == '\r')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		nbr = nbr * 10 + *str++ - '0';
	return (nbr * neg);
}
