#include "lh_proto.h"

void		fct_inexistante(void *data, size_t size)
{

}

void		fct_inexistante2(t_list *elem)
{

}

t_list		*fct_inexistante3(t_list *elem)
{
	unsigned int i;
	t_list	*modify;

	i = 0;
	modify = NULL;
	if (!(modify = (t_list *)malloc(1000)))
		return (NULL);
	while (elem->content_size != 0)
	{
		modify->content_size = elem->content_size;
		modify->content = elem->content;
		modify->next++;
		elem->next++;
		i++;
	}
	return (modify);
}

int		main(int ac, char **av)
{
	ft_lstnew((void*)av[1], (size_t)atoi(av[2]));

//	ft_lstdelone(, &fct_inexistante);

//	ft_lstdel(, &fct_inexistante);

//	ft_lstadd(, );

//	ft_lstiter(, &fct_inexistante);

//	ft_lstmap(, &fct_inexistante);

	return (0);
}
