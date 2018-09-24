#include "lh_proto.h"

void	ft_memdel(void **ap)
{
	free(ap);
	ap = NULL;
}
