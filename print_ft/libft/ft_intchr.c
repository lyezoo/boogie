/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 16:40:05 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/02/08 19:40:07 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intchr(char const *s, char const *accept)
{
	int	i;
	int	j;

	i = 0;
	if (s[i] && accept[i])
	{
		while (s[i])
		{
			j = 0;
			while (accept[j])
			{
				if (accept[j] == s[i])
					return (i);
				++j;
			}
			++i;
		}
	}
	return (-1);
}

/*
int main(int ac, char **av)
{
	printf("intchr = %zu\n", ft_intchr(av[1], av[2]));
}
*/
