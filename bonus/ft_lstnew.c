#include "lh_proto.h"

int		num_elem(char *elem)
{
	int i;

	i = 0;
	while (elem[i])
		i++;
	return (i);
}

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	size_t elem;
	t_list	*maillon;

	elem = num_elem((char*)content);
	maillon = NULL;
	if (!(maillon = (t_list *)malloc(sizeof(maillon) * elem)))
		return (NULL);
	maillon->content_size = content_size * elem;
	maillon->content = (int *)content;
	maillon->next = maillon;
	return (maillon);
}
