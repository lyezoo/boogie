#include "lh_proto.h"

void	*ft_memccpy(void *dest, void const *src, int c, size_t n)
{
	unsigned char *dest_n;
	unsigned char *src_n;
	unsigned int i;

	i = 0;
	dest_n = dest;
	src_n = (unsigned char *)src;
	while (i < n && src_n[i])
	{
		if (src_n[i] == c)
			return (&dest[i + 1]);
		dest_n[i] = src_n[i];
		i++;
	}
	return (NULL);
}
