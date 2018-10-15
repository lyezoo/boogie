#include "lh_proto.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	return ((void*)ft_strncpy((char*)dest, (char*)src, n));
}
