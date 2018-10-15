#include "lh_proto.h"

int		ft_strncmp(char const *s1, char const *s2, size_t n)
{
	unsigned int i;

	i = 0;
	while (s1[i] == s2[i] && i < n && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
