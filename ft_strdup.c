#include "lh_proto.h"

char	*ft_strdup(char *str)
{
	int i;
	char *dest;

	i = 0;
	dest = NULL;
	if (!(dest = (char *)malloc(sizeof(char) * ft_strlen(str))))
		return (NULL);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
