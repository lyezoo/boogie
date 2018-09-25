#include "lh_proto.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	int		i;
	t_list	*maillon;

	i = 0;
	maillon = NULL;
	if (!(maillon = (t_list *)malloc(sizeof(tlist) * content_size)))
		return (NULL);
	if (!(char*)content)
	{
		maillon->content_size[i] = content_size;
		maillon->content[i] = *content;
		content++;
		i++;
	}
	return (maillon);
}
