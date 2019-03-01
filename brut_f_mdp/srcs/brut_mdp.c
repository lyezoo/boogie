/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brut_mdp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 17:26:17 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/03/02 00:29:15 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/brut.h"

int			check_last(char *mdp, int n)
{
	int i;
	int cpt;

	i = 0;
	cpt = 0;
	while (mdp[i])
	{
		if (mdp[i] == '~')
			++n;
		++i;
	}
	return (n == cpt ? 0 : 1);
}

static void	print_mdp(char *mdp)
{
	ft_putstr("le mot de passe a ete trouve :\n");
	ft_putendl(mdp);
	exit(0);
}

static char	*fill_mdp(char *mdp, int n)
{
	int i;

	i = 0;
	if (!(mdp = (char *)ft_memalloc(n + 1)))
		return (NULL);
	while (i < n)
		mdp[i++] = ' ';
	mdp[i] = '\0';
	return (mdp);
}

void		brut(char *mdp, char *sol, int n)
{
	int		i;
	int		pos;

	pos = 0;
	aff_message(n);
	while ()
	{
		if (n == 13)
			exit(0);
		while (check_last(mdp, n))
		{
			i = 0;
			if (ft_strequ(mdp, sol))
				print_mdp(mdp);
			if (mdp[i] == '~')
			{
				while (mdp[i] == '~')
					mdp[i++] = ' ';
				++pos;
			}
			if (mdp[i] <= '~')
				mdp[i]++;
		}
	}
	brut(fill_mdp(NULL, n + 1), sol, n + 1);
}

int		main(int ac, char **av)
{
	char	*mdp;

	if (ac != 2)
		return (0);
	ft_putstr("Nous tentons de trouver votre mot de passe :\n");
	mdp = NULL;
	mdp = fill_mdp(mdp, 4);
	brut(mdp, av[1], 4);
	return (0);
}
