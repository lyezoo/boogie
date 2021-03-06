/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <lyhamrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:11:34 by lyhamrou          #+#    #+#             */
/*   Updated: 2018/11/12 20:17:02 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count(char const *str)
{
	int			i;
	int			cpt;

	i = 0;
	cpt = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	if (str[i])
	{
		while (str[i])
		{
			i++;
			cpt++;
		}
		while (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n')
		{
			i--;
			cpt--;
		}
	}
	return (cpt);
}

char			*ft_strtrim(char const *s)
{
	int			i;
	int			x;
	char		*str;
	int			num;

	i = 0;
	x = 0;
	str = NULL;
	if (!s)
		return (NULL);
	num = count(s);
	if (!(str = (char *)malloc(sizeof(char) * num + 1)))
		return (NULL);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (num > 0)
	{
		str[x++] = s[i++];
		num--;
	}
	str[x] = '\0';
	return (str);
}
