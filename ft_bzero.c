#include "lh_proto.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s = NULL;
		i++;
		s++;
	}
}
