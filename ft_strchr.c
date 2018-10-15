#include "lh_proto.h"

char	*ft_strchr(char const *s, int c)
{
	char *str;

	str = (char *)s;
	if (c == '\0' || !s)
		return ("\0");
	while (*str)
	{
		if (*str == c)
			return (*&str);
		str++;
	}
	return (NULL);
}
