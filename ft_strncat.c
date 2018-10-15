#include "lh_proto.h"

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (j < n && src[j])
		dest[i++] = src[j++];
	while (j < n)
	{
		dest[i++] = '\0';
		j++;
	}
	return (dest);
}
