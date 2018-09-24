#include "lh_proto.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int i;
	char *dest;

	dest = NULL;
	if (!(dest = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
		dest[i++] = s[start++];
	dest[i] = '\0';
	return (dest);
}
