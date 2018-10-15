#include "lh_proto.h"

char	*ft_strcat(char *dest, char *src)
{
	int i;

	i = ft_strlen(src) + ft_strlen(dest);
	while (*dest)
		dest++;
	while (*src)
		*(dest)++ = *(src)++;
	*dest = '\0';
	return (&dest[-i]);
}
