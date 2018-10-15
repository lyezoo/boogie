#include "lh_proto.h"

void	*ft_memalloc(size_t size)
{
	char *buf;
	unsigned int i;

	buf = NULL;
	i = 0;
	if (!(buf = (void *)malloc(sizeof(void) * size)))
		return (NULL);
	while (i < size)
		buf[i++] = 0;
	return ((void *)buf);
}
