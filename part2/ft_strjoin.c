#include "lh_proto.h"

int		count(char const *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i + 1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int x;
	char *str;

	i = 0;
	x = 0;
	str = NULL;
	if (!(str = (char *)malloc(sizeof(char) * (count(s1) + count(s2)))))
		return (NULL);
	while (s1[i])
		str[x++] = s1[i++];
	i = 0;
	while (s2[i])
		str[x++] = s2[i++];
	str[x] = '\0';
	return (str);
}
