#include "lh_proto.h"

void	*ft_memmove(void *dest, void *src, size_t len)
{
	unsigned char *tmp_src;
	unsigned char *tmp_dest;
	unsigned int i;

	i = 0;
	tmp_src = (unsigned char *)src;
	tmp_dest = (unsigned char *)dest;
//	printf("tmp-src : %s\n", tmp_src);
//	printf("tmp-dest : %s\n", tmp_dest);
	dest = &tmp_dest;
	while (i < len)
	{
		t = 7;
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	return (dest);
}
