#include "lh_proto.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *s_char;

	i = 0;
	s_char = s;
	if (!(s_char = (unsigned char *)malloc(sizeof(char) * n)))
		return NULL;
	while (i < n)
		s_char[i++] = c;
	return (s);
}
