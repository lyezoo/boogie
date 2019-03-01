/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 17:03:10 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/03/02 00:29:45 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf/includes/ft_printf.h"

int		main(void)
{
	char const *t = "%-5.zi %#15.6llu %-+9.7zi %#-9.jx %#+-050zu %#0.50o %f.\n";
//	char const *t = "%-5.zi %#15.6llu %-+9.7zi.\n";
	long		a = 0;
	long		b = -42;
	long		c = LONG_MIN;
	long		d = INT_MIN;
	long		e = ULONG_MAX;
	long		f = LONG_MAX;
	long		g = INT_MAX;
	long		h = 1000;
	long		i = -1000;
	long		j = 42;
	float		s = -123.456;
//	char		*s = NULL;


	printf("\033[33m\n========================\033[0m\n");
	printf("\033[33m========================\033[0m\n");
	printf("txt = %s", t);
	printf("\033[33m========================\033[0m\n");
	printf("\033[33m========================\033[0m\n\n\n");
	   printf("--------- printf ---------\n");


	   printf("return -------------> %d\n",    printf(t, a,b,c,d,e,f,g,h,i,j,e,s));
	ft_printf("return -------------> %d\n", ft_printf(t, a,b,c,d,e,f,g,h,i,j,e,s));


//	   printf("return -------------> %d\n",    printf(t,a,b,c));
//	ft_printf("return -------------> %d\n", ft_printf(t,a,b,c));


	printf("-------- ft_printf -------\n");
	printf("\033[33m\n========================\n\033[0m\n");
	return (0);
}
