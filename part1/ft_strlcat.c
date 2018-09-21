#include "lh_proto.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (i);
}
