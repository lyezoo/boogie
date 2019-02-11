/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 17:03:10 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/02/11 04:18:42 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		main(void)
{
	char const *t = "%-5.3s.\n";
//	long		s = 0;
	char	*s = "sa";

	printf("\n\n\ntxt = %sin  = %s\n", t, s);
	printf("--------- printf ---------\n");
	   printf("return %d\n",    printf(t, s));
	printf("------------------\n");
	ft_printf("return %d\n", ft_printf(t, s));
	printf("-------- ft_printf -------\n");
	return (0);
}
