#include "lh_proto.h"

int		main(int ac, char **av)
{
	char *s1 = av[1];
	char *ss1 = av[1];
	char *s2 = av[2];

	(void)ac;
	printf("la vraie  : %s\n", strnstr(ss1, s2, 5));
	printf("la mienne : %s\n", ft_strnstr(s1, s2, 5));
	return (0);
}
