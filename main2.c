#include "lh_proto.h"

char	ft_plus_one(char s)
{
	s = s + 1;
	write(1, &s, 1);
	return (s);
}

int		main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	char **sd;

	sd = NULL;
	(void)ac;
	//printf("la mienne : %s\n", ft_itoa(atoi(av[1])));

	//ft_putchar_fd(av[1][0], atoi(av[2]));

//	while (ft_strsplit(av[1], av[2][0])[i])
//	{
//		j = 0;
//		while (ft_strsplit(av[1], av[2][0])[i][j])
//			ft_putchar(ft_strsplit(av[1], av[2][0])[i][j++]);
//		ft_putchar('\n');
//		i++;
//	}

//	while (ft_split_whitespaces(av[1])[i])
//	{
//		ft_putstr(ft_split_whitespaces(av[1])[i++]);
//		ft_putchar('\n');
//	}

//	sd = ft_split_whitespaces(av[1]);
//	printf("avant del : %s\n", *sd);
//	ft_strdel(sd);
//	printf("apres del : %s\n", *sd);

//	ft_strclr(av[1]);

//	printf("ma fct de boss : %d\n", ft_strequ(av[1], av[2]));

//	printf("on est la : %d\n", ft_strnequ(av[1], av[2], atoi(av[3])));

//	printf("ma fct : %s\n", ft_strnew(atoi(av[1])));

//	printf("petite fct qui glisse : %s\n", ft_memalloc(atoi(av[1])));

//	printf("petite fct qui glisse : %s\n", ft_memdel(ft_split_whitespaces(av[1])));

//	ft_striter(av[1], &ft_putstr);

//	ft_striteri(av[1], &ft_Gpa2fct);

//	ft_strmap(av[1], &ft_plus_one);

//	ft_strmapi(av[1], &ft_flemme2faire1fct);

//	printf("coucou : %s\n", ft_strsub(av[1], atoi(av[2]), atoi(av[3])));

//	printf("coucou : %s\n", ft_strjoin(av[1], av[2]));

//	printf("la : %s\n", ft_strtrim(av[1]));

//	ft_putendl(av[1]);

//	ft_putchar_fd(av[1][0]);

//	ft_putstr_fd(av[1]);

//	ft_putendl_fd(av[1]);

//	ft_putnbr_fd(atoi(av[1]));

	return (0);
}
