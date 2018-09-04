#include "lh_proto.h"

void	*ft_memccpy(void *dest, void *src, int c, size_t n)
{
	char *dest_n;
	char *src_n;
	unsigned int i;

	i = 0;
	dest_n = dest;
	src_n = src;
	while (i < n)
	{
		if (src_n[i] == (unsigned char)c)
			return (&dest[i + 1]);
		dest_n[i] = src_n[i];
		i++;
	}
	return (NULL);
}
