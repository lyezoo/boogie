#include "lh_proto.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	unsigned char *s_cpy;
	unsigned int i;

	s_cpy = s;
	i = 0;
	while (i <= n && s_cpy[i])
	{
		if (s_cpy[i] == c)
		{
			return (&s[i]);
		}
		i++;
		n--;
	}
	return (NULL);
}
