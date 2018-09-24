#include "lh_proto.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);
	if (s1[0] == '\0' || s2[0] == '\0')
		return (0);
	while (i < n && (*s1 != '\0' || *s2 != '\0'))
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
		i++;
	}
	return (1);
}
