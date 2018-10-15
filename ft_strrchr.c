#include "lh_proto.h"

char	*ft_strrchr(char const *s, int c)
{
	char	*str;

	str = (char *)s;
	if (c == '\0' || !str)
		return ("\0");
	while (*str)
		str++;
	str--;
	while (*str)
	{
		if (*str == c)
			return (*&str);
		str--;
	}
	return (NULL);
}
