#include "lh_proto.h"

void	*ft_memchr(void const *s, int c, size_t n)
{
	char *s2;

	s2 = (char *)s;
	while (n > 0)
	{
		if (*s2 == c)
			return (s2);
		s2++;
		n--;
	}
	return (NULL);
}
