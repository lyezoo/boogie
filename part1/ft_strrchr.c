#include "lh_proto.h"

char	*ft_strrchr(char *s, int c)
{
	int i;

	i = 0;
	if (c == '\0')
		return ("\0");
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return (&s[i]);
		i--;
	}
	return (NULL);
}
