#include "lh_proto.h"

char	*ft_strnstr(char *str, char *to_find, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (!to_find[i])
		return (str);
	if (ft_strlen(str) < ft_strlen(to_find))
		return (NULL);
	while (to_find[j] && str[i] && i < n)
	{
		j = 0;
		while (to_find[j] != str[i] && str[i] && i < n)
			i++;
		while (to_find[j] == str[i] && to_find[j] && i < n)
		{
			i++;
			j++;
		}
		if (!to_find[j])
			return (&str[i - ft_strlen(to_find)]);
	}
	return (NULL);
}
