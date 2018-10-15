#include "lh_proto.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
		((char*)s)[i++] = c;
	return (s);
}
