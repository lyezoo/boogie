#include "lh_proto.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*(str)++);
}
