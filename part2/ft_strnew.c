#include "lh_proto.h"

char	*ft_strnew(size_t size)
{
	char *str;
	unsigned int i;

	str = NULL;
	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * size)))
		return (0);
	while (i <= size)
		str[i++] = '\0';
	return (str);
}
