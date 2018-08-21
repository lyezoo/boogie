#include "lh_proto.h"

int		main(int ac, char **av)
{
	char *s1 = av[1];
	char *ss1 = av[1];
	char *s2 = av[2];

	(void)ac;
//	printf("la vraie  : %s\n", strnstr(ss1, s2, 5));
//	printf("la mienne : %s\n", ft_strnstr(s1, s2, 5));
//	printf("la vraie  : %s\n", strncat(ss1, s2, 5));
//	printf("la mienne : %s\n", ft_strncat(s1, s2, 5));
//	printf("la vraie  : %s\n", strncpy(ss1, s2, 5));
//	printf("la mienne : %s\n", ft_strncpy(s1, s2, 5));
//	printf("la vraie  : %s\n", strcat(ss1, s2, 5));
//	printf("la mienne : %s\n", ft_strcat(s1, s2, 5));
//	printf("la vraie  : %s\n", strdup(ss1, s2, 5));
//	printf("la mienne : %s\n", ft_strdup(s1, s2, 5));
//	printf("la vraie  : %s\n", strcmp(ss1, s2, 5));
//	printf("la mienne : %s\n", ft_strcmp(s1, s2, 5));
//	printf("la vraie  : %s\n", strnstr(ss1, s2, 5));
//	printf("la mienne : %s\n", ft_strnstr(s1, s2, 5));
//	printf("la vraie  : %s\n", strstr(ss1, s2, 5));
//	printf("la mienne : %s\n", ft_strstr(s1, s2, 5));
//	printf("la vraie  : %s\n", strncmp(ss1, s2, 5));
//	printf("la mienne : %s\n", ft_strncmp(s1, s2, 5));
//	printf("la vraie  : %s\n", atoi(ss1, s2, 5));
//	printf("la mienne : %s\n", ft_atoi(s1, s2, 5));
//	printf("la vraie  : %s\n", ft_split_whitespaces(av[1]));
//	printf("la vraie  : %i\n", ft_isalpha(atoi(av[1])));
//	printf("la mienne : %i\n", ft_isalpha(atoi(av[1])));
//	printf("la vraie  : %i\n", isdigit(atoi(av[1])));
//	printf("la mienne : %i\n", ft_isdigit(atoi(av[1])));
//	printf("la vraie  : %d\n", isalnum(atoi(av[1])));
//	printf("la mienne : %d\n", ft_isalnum(atoi(av[1])));
	printf("la vraie  : %d\n", isascii(atoi(av[1])));
	printf("la mienne : %d\n", ft_isascii(atoi(av[1])));
//	printf("la vraie  : %d\n", isprint(atoi(av[1])));
//	printf("la mienne : %d\n", ft_isprint(atoi(av[1])));
	return (0);
}
