#include "lh_proto.h"

void	ft_strdel(char **as)
{
	free(*as);
	*as = NULL;
}//est cense free une string mais prend en entree tableau
