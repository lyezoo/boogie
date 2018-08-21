#include "lh_proto.h"

int		main(int ac, char **av)
{
	char *s1 = av[1];
	char *ss1 = av[1];
	char *s2 = av[2];
	void *bz = av[1];
	int zer = atoi(av[2]);

	(void)ac;
//	printf("la vraie  : %s\n", strnstr(ss1, s2, 5));
//	printf("la mienne : %s\n", ft_strnstr(s1, s2, 5));
//
//printf("la vraie  : %s\n", strncat(ss1, s2, 5));
//	printf("la mienne : %s\n", ft_strncat(s1, s2, 5));
//
//printf("la vraie  : %s\n", strncpy(ss1, s2, 5));
//	printf("la mienne : %s\n", ft_strncpy(s1, s2, 5));
//
//printf("la vraie  : %s\n", strcat(ss1, s2, 5));
//	printf("la mienne : %s\n", ft_strcat(s1, s2, 5));
//
//printf("la vraie  : %s\n", strdup(ss1, s2, 5));
//	printf("la mienne : %s\n", ft_strdup(s1, s2, 5));
//
//printf("la vraie  : %s\n", strcmp(ss1, s2, 5));
//	printf("la mienne : %s\n", ft_strcmp(s1, s2, 5));
//
//printf("la vraie  : %s\n", strnstr(ss1, s2, 5));
//	printf("la mienne : %s\n", ft_strnstr(s1, s2, 5));
//
//printf("la vraie  : %s\n", strstr(ss1, s2, 5));
//	printf("la mienne : %s\n", ft_strstr(s1, s2, 5));
//
//printf("la vraie  : %s\n", strncmp(ss1, s2, 5));
//	printf("la mienne : %s\n", ft_strncmp(s1, s2, 5));
//
//printf("la vraie  : %s\n", atoi(ss1, s2, 5));
//	printf("la mienne : %s\n", ft_atoi(s1, s2, 5));
//
//printf("la vraie  : %s\n", ft_split_whitespaces(av[1]));
//
//printf("la vraie  : %i\n", ft_isalpha(atoi(av[1])));
//printf("la mienne : %i\n", ft_isalpha(atoi(av[1])));
//
//	printf("la vraie  : %i\n", isdigit(atoi(av[1])));
//printf("la mienne : %i\n", ft_isdigit(atoi(av[1])));

//	printf("la vraie  : %d\n", isalnum(atoi(av[1])));
//	printf("la mienne : %d\n", ft_isalnum(atoi(av[1])));

//	printf("la vraie  : %d\n", isascii(atoi(av[1])));
//	printf("la mienne : %d\n", ft_isascii(atoi(av[1])));

//	printf("la vraie  : %d\n", isprint(atoi(av[1])));
//	printf("la mienne : %d\n", ft_isprint(atoi(av[1])));
//
//	printf("la vraie  : %d\n", toupper(atoi(av[1])));
//	printf("la mienne : %d\n", ft_toupper(atoi(av[1])));

//	printf("la vraie  : %d\n", tolower(atoi(av[1])));
//	printf("la mienne : %d\n", ft_tolower(atoi(av[1])));

//	printf("la vraie  : %s\n", strchr(av[1], av[2][0]));
//	printf("la mienne : %s\n", ft_strchr(av[1], av[2][0]));

//	printf("la vraie  : %s\n", strrchr(av[1], av[2][0]));
//	printf("la mienne : %s\n", ft_strrchr(av[1], av[2][0]));

	bzero(bz, atoi(av[2]));
	printf("la vraie  : %s\n", bz);
	printf("l adresse n-1 : %s\n", &bz[zer - 2]);
	printf("l adresse n : %s\n", &bz[zer - 1]);
	printf("l adresse n+1 : %s\n", &bz[zer]);
	ft_bzero(av[1], atoi(av[2]));
	printf("\n\nla mienne : %s\n", bz);
	printf("l adresse n-1 : %s\n", &bz[zer - 2]);
	printf("l adresse n : %s\n", &bz[zer - 1]);
	printf("mon adresse n+1 : %s\n", &bz[zer]);

//memset();
//memcpy();
//memccpy();
//memmove();
//memchr();
//memcmp();

	return (0);
}
