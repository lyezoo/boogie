#include "lh_proto.h"

int		main(int ac, char **av)
{
	char *s1 = av[1];
	char *ss1 = av[1];
	char *s2 = av[2];
	char *av1 = av[1];
	void *bz = av[1];
	int zer = atoi(av[2]);
	void *set = av[1];
	void *ft_set = av[1];
	void *dest1 = av[1];
	void *ft_dest1 = av[1];
	void *src1 = av[2];
	void *ft_src1 = av[2];

	(void)ac;
//	printf("la vraie  : %s\n", strnstr(ss1, s2, 5));
//	printf("la mienne : %s\n", ft_strnstr(s1, s2, 5));
//
//printf("la vraie  : %s\n", strncat(ss1, s2, 5));
//	printf("la mienne : %s\n", ft_strncat(s1, s2, 5));
//
//	printf("la vraie  : %lu\n", strlcat(av[1], av[2], atoi(av[3])));
//	printf("la mienne  : %u\n", ft_strlcat(av[1], av[2], atoi(av[3])));
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
//	printf("la vraie  : %d\n", strncmp(ss1, s2, atoi(av[3])));
//	printf("la mienne : %d\n", ft_strncmp(s1, s2, atoi(av[3])));
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

//	bzero(bz, atoi(av[2]));
//	printf("a l'adresse 0 : %s\n", &bz[0]);
//	printf("pour n =  %d   : %s\n",zer, &bz[zer - 1]);
//	printf("pour n + 1    : %s\n", &bz[zer]);
//	ft_bzero(av[1], atoi(av[2]));
//	printf("a l'adresse 0 : %s\n", &av[1][0]);
//	printf("pour n = %d    : %s\n", zer, &av[1][zer - 1]);
//	printf("pour n+1      : %s\n", &av[1][zer]);

//	printf("la vraie  : %s\n", memset(set, atoi(av[2]), (size_t)atoi(av[3])));
//	printf("la mienne : %s\n", ft_memset(ft_set, atoi(av[2]), (size_t)atoi(av[3])));

//	printf("la vraie  : %s\n", memcpy(dest1, src1, atoi(av[3])));
//	printf("la mienne : %s\n", ft_memcpy(ft_dest1, ft_src1, atoi(av[3])));

//	printf("la vraie  : %p\n", memccpy(dest1, src1, atoi(av[3]), atoi(av[4])));
//	printf("la mienne : %p\n", ft_memccpy(ft_dest1, ft_src1, atoi(av[3]), atoi(av[4])));

//	printf("la vraie  : %d\n", memcmp(dest1, src1, atoi(av[3])));
//	printf("la mienne : %d\n", ft_memcmp(ft_dest1, ft_src1, atoi(av[3])));

//	printf("la vraie  : %s\n", memchr(av[1], atoi(av[2]), atoi(av[3])));
//	printf("la mienne : %s\n", ft_memchr(av[1], atoi(av[2]), atoi(av[3])));

	printf("la vraie  : %s\n", memmove(dest1, src1, atoi(av[3])));
	printf("la mienne : %s\n", ft_memmove(ft_dest1, ft_src1, atoi(av[3])));

	return (0);
}
