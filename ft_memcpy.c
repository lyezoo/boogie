#include "lh_proto.h"

void	*fft_memcpy(void *dest, void *src, size_t n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest = &src;
		i++;
		dest++;
		src++;
	}
	return (dest);
}

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	return ((void*)ft_strncpy((char*)dest, (char*)src, n));
}
