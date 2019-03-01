/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 17:03:10 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/03/01 04:39:39 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf/includes/ft_printf.h"
#include "../../ft_printf/libft/libft.h"

int		main(int ac, char **av)
{
/*
 ** Flag c  : line 34 to 130
 ** Flag s  : line 132 to 
 ** Flag p  : line  to 
 ** Flag di : line  to 
 ** Flag o  : line  to 
 ** Flag u  : line  to 
 ** Flag x  : line  to 
 ** Flag X  : line  to 
 ** Flag f  : line  to 
 ** Flag %  : line  to 
 */
	if (ac != 2)
	{
		ft_putstr("nb argument\n");
		return (0);
	}
//------------------------------------------------------- Flag c line 34 to 130
	if (av[1][0] == 'c')
	{
		int		i = 1;
		int		ii = 10;

		printf("\n\n--------------------------\n");
		printf("------ test %d/%d ------\n", i++, ii);
		printf("test = %%c.\nargument = %c\n", 'x');
		printf("--------- printf ---------\n");
		   printf("return --> %d\n",    printf("%c.\n", 'x'));
		ft_printf("return --> %d\n", ft_printf("%c.\n", 'x'));
		printf("-------- ft_printf -------\n");
		printf("--------------------------\n");

		printf("\n\n--------------------------\n");
		printf("------ test %d/%d ------\n", i++, ii);
		printf("test = %%c.\nargument = %s\n", "(null)");
		printf("--------- printf ---------\n");
		   printf("return --> %d\n",    printf("%c.\n", NULL));
		ft_printf("return --> %d\n", ft_printf("%c.\n", NULL));
		printf("-------- ft_printf -------\n");
		printf("--------------------------\n");

		printf("\n\n--------------------------\n");
		printf("------ test %d/%d ------\n", i++, ii);
		printf("test = %%5c.\nargument = %c\n", "(null)");
		printf("--------- printf ---------\n");
		   printf("return --> %d\n",    printf("%5c.\n", 'x'));
		ft_printf("return --> %d\n", ft_printf("%5c.\n", 'x'));
		printf("-------- ft_printf -------\n");
		printf("--------------------------\n");

		printf("\n\n--------------------------\n");
		printf("------ test %d/%d ------\n", i++, ii);
		printf("test = %%5c.\nargument = %s\n", "(null)");
		printf("--------- printf ---------\n");
		   printf("return --> %d\n",    printf("%5c.\n", NULL));
		ft_printf("return --> %d\n", ft_printf("%5c.\n", NULL));
		printf("-------- ft_printf -------\n");
		printf("--------------------------\n");

		printf("\n\n--------------------------\n");
		printf("------ test %d/%d ------\n", i++, ii);
		printf("test = %%5.3c.\nargument = %c\n", 'x');
		printf("--------- printf ---------\n");
		   printf("return --> %d\n",    printf("%5.3c.\n", 'x'));
		ft_printf("return --> %d\n", ft_printf("%5.3c.\n", 'x'));
		printf("-------- ft_printf -------\n");
		printf("--------------------------\n");

		printf("\n\n--------------------------\n");
		printf("------ test %d/%d ------\n", i++, ii);
		printf("test = %%-5c.\nargument = %c\n", 'x');
		printf("--------- printf ---------\n");
		   printf("return --> %d\n",    printf("%-5c.\n", 'x'));
		ft_printf("return --> %d\n", ft_printf("%-5c.\n", 'x'));
		printf("-------- ft_printf -------\n");
		printf("--------------------------\n");

		printf("\n\n--------------------------\n");
		printf("------ test %d/%d ------\n", i++, ii);
		printf("test = %%05c.\nargument = %c\n", 'x');
		printf("--------- printf ---------\n");
		   printf("return --> %d\n",    printf("%05c.\n", 'x'));
		ft_printf("return --> %d\n", ft_printf("%05c.\n", 'x'));
		printf("-------- ft_printf -------\n");
		printf("--------------------------\n");

		printf("\n\n--------------------------\n");
		printf("------ test %d/%d ------\n", i++, ii);
		printf("test = %%-05c.\nargument = %c\n", 'x');
		printf("--------- printf ---------\n");
		   printf("return --> %d\n",    printf("%-05c.\n", 'x'));
		ft_printf("return --> %d\n", ft_printf("%-05c.\n", 'x'));
		printf("-------- ft_printf -------\n");
		printf("--------------------------\n");

		printf("\n\n--------------------------\n");
		printf("------ test %d/%d ------\n", i++, ii);
		printf("test = %%-05.2c.\nargument = %c\n", 'x');
		printf("--------- printf ---------\n");
		   printf("return --> %d\n",    printf("%-05.2c.\n", 'x'));
		ft_printf("return --> %d\n", ft_printf("%-05.2c.\n", 'x'));
		printf("-------- ft_printf -------\n");
		printf("--------------------------\n");

		printf("\n\n--------------------------\n");
		printf("------ test %d/%d ------\n", i++, ii);
		printf("test = %%-05.2c.\nargument = %s\n", "(null)");
		printf("--------- printf ---------\n");
		   printf("return --> %d\n",    printf("%-05.2c.\n", NULL));
		ft_printf("return --> %d\n", ft_printf("%-05.2c.\n", NULL));
		printf("-------- ft_printf -------\n");
		printf("--------------------------\n");
	}
//------------------------------------------------------ Flag s line 132 to 000
	if (av[1][0] == 'd' || av[1][0] == 'i')
	{
		int		i = 1;
		int		ii = 0;
		int		z = 0;
		int		oo = -1;
		int		o = 1;
		int		tt = -10;
		int		t = 10;
		int		ff = -42;
		int		f = 42;
		int		imm = INT_MIN;
		int		im = INT_MAX;
		int		lmm = LONG_MIN;
		int		lm = LONG_MAX;
		int		uim = UINT_MAX;
		int		ulm = ULONG_MAX;

		printf("\n\n--------------------------\n");
		printf("------ test %d/%d ------\n", i++, ii);
		printf("test = %%d.\nargument = %d\n", z);
		printf("--------- printf ---------\n");
		   printf("return --> %d\n",    printf("%d.\n", z));
		ft_printf("return --> %d\n", ft_printf("%d.\n", z));
		printf("-------- ft_printf -------\n");
		printf("--------------------------\n");

		printf("\n\n--------------------------\n");
		printf("------ test %d/%d ------\n", i++, ii);
		printf("test = %%.d.\nargument = %d\n", z);
		printf("--------- printf ---------\n");
		   printf("return --> %d\n",    printf("%.d.\n", z));
		ft_printf("return --> %d\n", ft_printf("%.d.\n", z));
		printf("-------- ft_printf -------\n");
		printf("--------------------------\n");

	}
	return (0);
}
