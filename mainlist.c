#include "lh_proto.h"

t_list		*create_elem(char **elem)
{
	int i;
	t_list *list;

	list = NULL;
	while (elem[i])
	{
		printf("elem[%d] : %s\n", i, elem[i]);
		list->content = elem[i];
		list->content_size = ft_strlen(elem[i]);
		list = list->next;
		i++;
	}
	return (list);
}

void		print_elem(t_list *list)
{
	write(1, "-o-", 3);
	while (list)
	{
		write(1, "-o-", 3);
		ft_putstr((char*)list->content);
		write(1, "\n", 1);
		list = list->next;
	}
}

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
	char **list;
	int i = 0;

	list = ft_split_whitespaces(av[1]);
	while (list[i])
	{
		ft_putstr(list[i++]);
		ft_putchar('\n');
	}
	print_elem(create_elem(list));

//	ft_lstnew((void*)av[1], (size_t)atoi(av[2]));

//	ft_lstdelone(, &fct_inexistante);

//	ft_lstdel(, &fct_inexistante);

//	ft_lstadd(, );

//	ft_lstiter(, &fct_inexistante);

//	ft_lstmap(, &fct_inexistante);

	return (0);
}
