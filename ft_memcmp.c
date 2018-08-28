#include "lh_proto.h"

int		fft_memcmp(void *dest, void *src, size_t n)
{
	unsigned int i;
	int d;
	int s;

	i = 0;
//		printf("dest : %s\n", dest);
//		printf("src  : %s\n", src);
	while (i < n)
	{
//		printf("dest : %s\n", dest);
//		printf("src  : %s\n", src);
		d = (int)dest;
		s = (int)src;
		printf("d  : %d\n", d);
		printf("s  : %d\n", s);
//		if (d != s)
//		{
//			write(1, "-o-", 3);
//			return (d - s);
//		}
		i++;
		dest++;
		src++;
//		printf("dest : %s\n", dest);
//		printf("src  : %s\n", src);
	}
		printf("dest : %s\n", dest);
		printf("src  : %s\n", src);
	return (d - s);
}

int		ftt_memcmp(void *dest, void *src, size_t n)
{
//	write(1 , &dest[n], 1);
//	write(1 , "\n", 1);
//	write(1 , &src[n], 1);
//	write(1 , "\n", 1);
//	printf("dest : %d\n", (int)dest);
//	printf("src  : %d\n", (int)src);
	char *t;
	char *g;


	t = (char*)dest;
	g = (char*)src;
	if (t != g)
	{
		return (t - g);
	}
	if (n > 0)
	{
//		write(1 , &dest, 1);
//		write(1 , &src, 1);
		ft_memcmp(++dest, ++src, n - 1);
	}
	return (0);
}

int		ft_memcmp(void *dest, void *src, size_t n)
{
	return (ft_strncmp((char*)dest, (char*)src, n));
}
