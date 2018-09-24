#include "lh_proto.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *maillon;

	if (!(maillon = (t_list *)malloc(sizeof(tlist) * content_size)))
		return (NULL);
	if (!*content)
	{
		maillon->content_size = 0;
		maillon->content = NULL;
	}
	maillon->content_size = *content_size;
	maillon->content = *content;
	return (maillon);
}
