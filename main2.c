#include "lh_proto.h"

int		main(int ac, char **av)
{
	(void)ac;
	printf("la mienne : %s\n", ft_itoa(atoi(av[1])));

	return (0);
}
