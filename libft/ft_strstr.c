#include "lh_proto.h"

char	*ft_strstr(char const *s1, char const *s2)
{
	int i;
	int j;
	char *str;

	i = 0;
	j = 0;
	str = (char *)s1;
	if (!s2[i])
		return (str);
	if (ft_strlen(s1) < ft_strlen(s2))
		return (NULL);
	while (s2[j] && s1[i])
	{
		j = 0;
		while (s2[j] != s1[i] && s1[i])
			i++;
		while (s2[j] == s1[i] && s2[j])
		{
			i++;
			j++;
		}
		if (!s2[j])
			return (&str[i - ft_strlen(s2)]);
	}
	return (NULL);
}
