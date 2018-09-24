#include "lh_proto.h"

void	ft_strclr(char *s)
{
	while (*s != '\0')
	{
		*s = 'a';
		s++;
	}
}
