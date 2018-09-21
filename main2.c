#include "lh_proto.h"

int		main(int ac, char **av)
{
	int i = 0;
	int j = 0;

	(void)ac;
	//printf("la mienne : %s\n", ft_itoa(atoi(av[1])));

	//ft_putchar_fd(av[1][0], atoi(av[2]));

	while (ft_strsplit(av[1], av[2][0])[i])
	{
		j = 0;
		while (ft_strsplit(av[1], av[2][0])[i][j])
			ft_putchar(ft_strsplit(av[1], av[2][0])[i][j++]);
		ft_putchar('\n');
		i++;
	}

//	while (ft_split_whitespaces(av[1])[i])
//	{
//		ft_putstr(ft_split_whitespaces(av[1])[i++]);
//		ft_putchar('\n');
//	}

	return (0);
}
