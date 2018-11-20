/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <lyhamrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 19:34:10 by lyhamrou          #+#    #+#             */
/*   Updated: 2018/11/20 13:33:33 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	char *str;

	if (size == 0)
	{
		str = ft_strdup((char *)ptr);
		free(ptr);
		return ((void *)str);
	}
	if (!(ptr = malloc(size)))
		if (!(str = (char *)malloc(sizeof(char) * size)))
			return (NULL);
	return (NULL);
}

int main(int ac, char **av)
{
	ft_realloc((void *)av[1], atoi(av[2]));
	return 0;
}
