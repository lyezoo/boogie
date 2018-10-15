#include "lh_proto.h"

int		ft_memcmp(void const *dest, void const *src, size_t n)
{
	unsigned char const *d;
	unsigned char const *s;

	d = dest;
	s = src;
	if (dest == src || n == 0)
		return (0);
	while (n > 0)
	{
		if (*d != *s)
			return (*d - *s);
		n--;
		d++;
		s++;
	}
	return (0);
}
