#include "lh_proto.h"

int		ft_isalpha(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			str++;
		else
			return (0);
	}
	return (1);
}

int		main(int ac, char **av)
{
	printf("%i\n", isalpha());
	return 0;
}
