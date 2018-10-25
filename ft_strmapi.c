#include "lh_proto.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	unsigned int i;

	str = NULL;
	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
		i++;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
