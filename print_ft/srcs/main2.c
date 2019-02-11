/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 17:03:10 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/02/11 04:13:20 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		main(int ac, char **av)
{

	if (ac != 2)
	{
		ft_putstr("nb argument\n");
		return (0);
	}

//---------------------------------------------------------------------- FLAG C
//-----------------------------------------------------------------------------

//---------------------------------------------------------------------- FLAG S

if (av[1][0] == 's')
{
	int		i = 0;
	int		ii = 35;
	char	*s0 = "";
	char	*s1 = NULL;
	char	*s2 = "salut";

	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%s\n", s0);
	printf("--------- printf ---------\n");
	   printf("%s\n", s0);
	ft_printf("%s\n", s0);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%s\n", s1);
	printf("--------- printf ---------\n");
	   printf("%s\n", s1);
	ft_printf("%s\n", s1);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%s\n", s2);
	printf("--------- printf ---------\n");
	   printf("%s\n", s2);
	ft_printf("%s\n", s2);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%.s\n", s2);
	printf("--------- printf ---------\n");
	   printf("%.s\n", s2);
	ft_printf("%.s\n", s2);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%.3s.\n", s2);
	printf("--------- printf ---------\n");
	   printf("%.3s.\n", s2);
	ft_printf("%.3s.\n", s2);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%.9s.\n", s2);
	printf("--------- printf ---------\n");
	   printf("%.9s.\n", s2);
	ft_printf("%.9s.\n", s2);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%1.3s.\n", s2);
	printf("--------- printf ---------\n");
	   printf("%1.3s.\n", s2);
	ft_printf("%1.3s.\n", s2);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%10.3s.\n", s2);
	printf("--------- printf ---------\n");
	   printf("%10.3s.\n", s2);
	ft_printf("%10.3s.\n", s2);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%10.8s.\n", s2);
	printf("--------- printf ---------\n");
	   printf("%10.8s.\n", s2);
	ft_printf("%10.8s.\n", s2);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%3.3s.\n", s2);
	printf("--------- printf ---------\n");
	   printf("%3.3s.\n", s2);
	ft_printf("%3.3s.\n", s2);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%3.s.\n", s2);
	printf("--------- printf ---------\n");
	   printf("%3.s.\n", s2);
	ft_printf("%3.s.\n", s2);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%8.10s.\n", s2);
	printf("--------- printf ---------\n");
	   printf("%8.10s.\n", s2);
	ft_printf("%8.10s.\n", s2);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%08s.\n", s2);
	printf("--------- printf ---------\n");
	   printf("%08s.\n", s2);
	ft_printf("%08s.\n", s2);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%010.8s.\n", s2);
	printf("--------- printf ---------\n");
	   printf("%010.8s.\n", s2);
	ft_printf("%010.8s.\n", s2);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%0.8s.\n", s2);
	printf("--------- printf ---------\n");
	   printf("%0.8s.\n", s2);
	ft_printf("%0.8s.\n", s2);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%-08s.\n", s2);
	printf("--------- printf ---------\n");
	   printf("%-08s.\n", s2);
	ft_printf("%-08s.\n", s2);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%-8.10s.\n", s2);
	printf("--------- printf ---------\n");
	   printf("%-8.10s.\n", s2);
	ft_printf("%-8.10s.\n", s2);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%-10.8s.\n", s2);
	printf("--------- printf ---------\n");
	   printf("%-10.8s.\n", s2);
	ft_printf("%-10.8s.\n", s2);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%-010.8s.\n", s2);
	printf("--------- printf ---------\n");
	   printf("%-010.8s.\n", s2);
	ft_printf("%-010.8s.\n", s2);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%-08s.\n", s2);
	printf("--------- printf ---------\n");
	   printf("%-08s.\n", s2);
	ft_printf("%-08s.\n", s2);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%-08s.\n", s1);
	printf("--------- printf ---------\n");
	   printf("%-08s.\n", s1);
	ft_printf("%-08s.\n", s1);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%-.8s.\n", s1);
	printf("--------- printf ---------\n");
	   printf("%-.8s.\n", s1);
	ft_printf("%-.8s.\n", s1);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%.3s.\n", s1);
	printf("--------- printf ---------\n");
	   printf("%.3s.\n", s1);
	ft_printf("%.3s.\n", s1);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%5.3s.\n", s1);
	printf("--------- printf ---------\n");
	   printf("%5.3s.\n", s1);
	ft_printf("%5.3s.\n", s1);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%-5.3s.\n", s1);
	printf("--------- printf ---------\n");
	   printf("%-5.3s.\n", s1);
	ft_printf("%-5.3s.\n", s1);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%5.s.\n", s1);
	printf("--------- printf ---------\n");
	   printf("%5.s.\n", s1);
	ft_printf("%5.s.\n", s1);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%-10s.\n", s1);
	printf("--------- printf ---------\n");
	   printf("%-10s.\n", s1);
	ft_printf("%-10s.\n", s1);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%-10.8s.\n", s1);
	printf("--------- printf ---------\n");
	   printf("%-10.8s.\n", s1);
	ft_printf("%-10.8s.\n", s1);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%-10.3s.\n", s1);
	printf("--------- printf ---------\n");
	   printf("%-10.3s.\n", s1);
	ft_printf("%-10.3s.\n", s1);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%-10s.\n", s0);
	printf("--------- printf ---------\n");
	   printf("%-10s.\n", s0);
	ft_printf("%-10s.\n", s0);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%.3s.\n", s0);
	printf("--------- printf ---------\n");
	   printf("%.3s.\n", s0);
	ft_printf("%.3s.\n", s0);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%05s.\n", s0);
	printf("--------- printf ---------\n");
	   printf("%05s.\n", s0);
	ft_printf("%05s.\n", s0);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%05.3s.\n", s0);
	printf("--------- printf ---------\n");
	   printf("%05.3s.\n", s0);
	ft_printf("%05.3s.\n", s0);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%-05.3s.\n", s0);
	printf("--------- printf ---------\n");
	   printf("%-05.3s.\n", s0);
	ft_printf("%-05.3s.\n", s0);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%05.10s.\n", s0);
	printf("--------- printf ---------\n");
	   printf("%05.10s.\n", s0);
	ft_printf("%05.10s.\n", s0);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%-05s.\n", s0);
	printf("--------- printf ---------\n");
	   printf("printf return    %d\n",    printf("%-05s.\n", s0));
	printf("--------------------------\n");
	ft_printf("ft_printf return %d\n", ft_printf("%-05s.\n", s0));
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


}
//-----------------------------------------------------------------------------
//*/ end of S

//---------------------------------------------------------------------- FLAG P

if (av[1][0] == 'p')
{
	int		i = 0;
	int		ii = 0;
	char	*n = NULL;
	char	*pf = "&printf";

	printf("\033[31m\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%p\n", n);
	printf("--------- printf ---------\n");
	   printf("%p\n", NULL);
	ft_printf("%p\n", NULL);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%p\n", n);
	printf("--------- printf ---------\n");
	   printf("%#+ 10.5p\n", n);
	ft_printf("%#+ 10.5p\n", n);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%s : %%p\n", n);
	printf("--------- printf ---------\n");
	   printf("%p\n", n);
	ft_printf("%p\n", n);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n\033[0m");


}
//-----------------------------------------------------------------------------

//* end of D,I at line 284
//-------------------------------------------------------------------- FLAG D,I
int		i = 0;
int		e = 0;
int		a = 10;
int		b = 42;
int		c = 2147483647;
long	d = 111111111111;
int		f = 123456;
int		aa = -10;
int		bb = -42;
int		cc = -2147483648;
long	dd = -111111111111;
int		ff = -123456;

if (av[1][0] == 'd' || av[1][0] == 'i')
{
int		ii = 24;
	printf("\033[33m\n\n-------- FLAG D, I -------\n");
	printf("--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%d & %%d\n", a, aa);
	printf("--------- printf ---------\n");
	   printf("%d _ %d\n", a, aa);
	ft_printf("%d _ %d\n", a, aa);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %% d & %% .3d\n", e, b);
	printf("--------- printf ---------\n");
	   printf("% d _ % .3d\n", e, b);
	ft_printf("% d _ % .3d\n", e, b);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%d & %%d\n", c, cc);
	printf("--------- printf ---------\n");
	   printf("%d _ %d\n", c, cc);
	ft_printf("%d _ %d\n", c, cc);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%ld & %ld : %%d & %%d\n", d, dd);
	printf("--------- printf ---------\n");
	   printf("%d _ %d\n", d, dd);
	ft_printf("%d _ %d\n", d, dd);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%d & %%.d\n", e, e);
	printf("--------- printf ---------\n");
	   printf("%d _ %.d\n", e, e);
	ft_printf("%d _ %.d\n", e, e);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%.3d & %%.3d\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%.3d _ %.3d\n", b, bb);
	ft_printf("%.3d _ %.3d\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%5.3d & %%5.3d\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%5.3d _ %5.3d\n", b, bb);
	ft_printf("%5.3d _ %5.3d\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%-5.3d & %%-5.3d\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%-5.3d _ %-5.3d\n", b, bb);
	ft_printf("%-5.3d _ %-5.3d\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%-+5.3d & %%-+5.3d\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%-+5.3d _ %-+5.3d\n", b, bb);
	ft_printf("%-+5.3d _ %-+5.3d\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%-05.3d & %%-05.3d\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%-05.3d _ %-05.3d\n", b, bb);
	ft_printf("%-05.3d _ %-05.3d\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%-0+5.3d & %%-0+5.3d\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%-0+5.3d _ %-0+5.3d\n", b, bb);
	ft_printf("%-0+5.3d _ %-0+5.3d\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%-0 5.3d & %%-0 5.3d\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%-0 5.3d _ %-0 5.3d\n", b, bb);
	ft_printf("%-0 5.3d _ %-0 5.3d\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%+4.3d & %%+4.3d\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%+4.3d _ %+4.3d\n", b, bb);
	ft_printf("%+4.3d _ %+4.3d\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%-0 5d & %% 5d\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%-0 5d _ % 5d\n", b, bb);
	ft_printf("%-0 5d _ % 5d\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%+10.5d & %%.5d\n", e, e);
	printf("--------- printf ---------\n");
	   printf("%+10.5d _ %.5d\n", e, e);
	ft_printf("%+10.5d _ %.5d\n", e, e);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%5.3lld & %%5.3lld\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%5.3lld _ %5.3lld\n", b, bb);
	ft_printf("%5.3lld _ %5.3lld\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%+5.3lld & %%+-5.3lld\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%+5.3lld _ %+-5.3lld\n", b, bb);
	ft_printf("%+5.3lld _ %+-5.3lld\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%ld & %ld : %%5.3ld & %%5.3ld\n", d, dd);
	printf("--------- printf ---------\n");
	   printf("%5.3ld _ %5.3ld\n", d, dd);
	ft_printf("%5.3ld _ %5.3ld\n", d, dd);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%3.5hhd & %%-.3hd\n", f, ff);
	printf("--------- printf ---------\n");
	   printf("%3.5hhd _ %-.3hd\n", f, ff);
	ft_printf("%3.5hhd _ %-.3hd\n", f, ff);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%+15.10lld & %%+15.10lld\n", f, ff);
	printf("--------- printf ---------\n");
	   printf("%+15.10d _ %+15.10d\n", f, ff);
	ft_printf("%+15.10d _ %+15.10d\n", f, ff);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%+10.5hhd & %%+10.5ld\n", e, e);
	printf("--------- printf ---------\n");
	   printf("%+10.5hhd _ %+10.5ld\n", e, e);
	ft_printf("%+10.5hhd _ %+10.5ld\n", e, e);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%lld & %lld : %%lld & %%lld\n", LONG_MIN, LONG_MAX);
	printf("--------- printf ---------\n");
	   printf("%lld _ %lld\n", LONG_MIN, LONG_MAX);
	ft_printf("%lld _ %lld\n", LONG_MIN, LONG_MAX);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%lld & %lld : %%lld & %%lld\n", LONG_MIN - 1, LONG_MAX + 1);
	printf("--------- printf ---------\n");
	   printf("%lld _ %lld\n", LONG_MIN - 1, LONG_MAX + 1);
	ft_printf("%lld _ %lld\n", LONG_MIN - 1, LONG_MAX + 1);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%5.0d & %%+5.0d\n", e, e);
	printf("--------- printf ---------\n");
	   printf("%5.0d _ %+5.0d\n", e, e);
	ft_printf("%5.0d _ %+5.0d\n", e, e);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %% 05d & %% 05d\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("% 05d _ % 05d\n", b, bb);
	ft_printf("% 05d _ % 05d\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n\033[0m");
}

//-----------------------------------------------------------------------------
//*/ end of DI


//---------------------------------------------------------------------- FLAG O
i = 0;

if (av[1][0] == 'o')
{
	int		iii = 30;
	printf("\033[36m\n\n--------- FLAG O ---------\n");
	printf("--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%o & %%o\n", a, aa);
	printf("--------- printf ---------\n");
	   printf("%o _ %o\n", a, aa);
	ft_printf("%o _ %o\n", a, aa);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%#o & %%#o\n", a, aa);
	printf("--------- printf ---------\n");
	   printf("%#o _ %#o\n", a, aa);
	ft_printf("%#o _ %#o\n", a, aa);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%.3o & %%.3o\n", a, aa);
	printf("--------- printf ---------\n");
	   printf("%.3o _ %.3o\n", a, aa);
	ft_printf("%.3o _ %.3o\n", a, aa);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%#.3o & %%#.3o\n", a, aa);
	printf("--------- printf ---------\n");
	   printf("%#.3o _ %#.3o\n", a, aa);
	ft_printf("%#.3o _ %#.3o\n", a, aa);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%5o & %%5o\n", a, aa);
	printf("--------- printf ---------\n");
	   printf("%5o _ %5o\n", a, aa);
	ft_printf("%5o _ %5o\n", a, aa);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%5.3o & %%5.3o\n", a, aa);
	printf("--------- printf ---------\n");
	   printf("%5.3o _ %5.3o\n", a, aa);
	ft_printf("%5.3o _ %5.3o\n", a, aa);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%o & %%o\n", a, aa);
	printf("--------- printf ---------\n");
	   printf("%o _ %o\n", a, aa);
	ft_printf("%o _ %o\n", a, aa);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %% o & %% .3o\n", e, b);
	printf("--------- printf ---------\n");
	   printf("% o _ % .3o\n", e, b);
	ft_printf("% o _ % .3o\n", e, b);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%o & %%o\n", c, cc);
	printf("--------- printf ---------\n");
	   printf("%o _ %o\n", c, cc);
	ft_printf("%o _ %o\n", c, cc);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%ld & %ld : %%o & %%o\n", d, dd);
	printf("--------- printf ---------\n");
	   printf("%o _ %o\n", d, dd);
	ft_printf("%o _ %o\n", d, dd);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%o & %%.o\n", e, e);
	printf("--------- printf ---------\n");
	   printf("%o _ %.o\n", e, e);
	ft_printf("%o _ %.o\n", e, e);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%.3o & %%.3o\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%.3o _ %.3o\n", b, bb);
	ft_printf("%.3o _ %.3o\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%5.3o & %%5.3o\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%5.3o _ %5.3o\n", b, bb);
	ft_printf("%5.3o _ %5.3o\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%-5.3o & %%-5.3o\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%-5.3o _ %-5.3o\n", b, bb);
	ft_printf("%-5.3o _ %-5.3o\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%-+5.3o & %%-+5.3o\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%-+5.3o _ %-+5.3o\n", b, bb);
	ft_printf("%-+5.3o _ %-+5.3o\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%-05.3o & %%-05.3o\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%-05.3o _ %-05.3o\n", b, bb);
	ft_printf("%-05.3o _ %-05.3o\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%-0+5.3o & %%-0+5.3o\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%-0+5.3o _ %-0+5.3o\n", b, bb);
	ft_printf("%-0+5.3o _ %-0+5.3o\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%-0 5.3o & %%-0 5.3o\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%-0 5.3o _ %-0 5.3o\n", b, bb);
	ft_printf("%-0 5.3o _ %-0 5.3o\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%+4.3o & %%+4.3o\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%+4.3o _ %+4.3o\n", b, bb);
	ft_printf("%+4.3o _ %+4.3o\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%-0 5o & %% 5o\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%-0 5o _ % 5o\n", b, bb);
	ft_printf("%-0 5o _ % 5o\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%+10.5o & %%.5o\n", e, e);
	printf("--------- printf ---------\n");
	   printf("%+10.5o _ %.5o\n", e, e);
	ft_printf("%+10.5o _ %.5o\n", e, e);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%5.3llo & %%5.3llo\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%5.3llo _ %5.3llo\n", b, bb);
	ft_printf("%5.3llo _ %5.3llo\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%+5.3llo & %%+-5.3llo\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%+5.3llo _ %+-5.3llo\n", b, bb);
	ft_printf("%+5.3llo _ %+-5.3llo\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%ld & %ld : %%5.3lo & %%5.3lo\n", d, dd);
	printf("--------- printf ---------\n");
	   printf("%5.3lo _ %5.3lo\n", d, dd);
	ft_printf("%5.3lo _ %5.3lo\n", d, dd);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%3.5hho & %%-.3ho\n", f, ff);
	printf("--------- printf ---------\n");
	   printf("%3.5hho _ %-.3ho\n", f, ff);
	ft_printf("%3.5hho _ %-.3ho\n", f, ff);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%+15.10llo & %%+15.10llo\n", f, ff);
	printf("--------- printf ---------\n");
	   printf("%+15.10o _ %+15.10o\n", f, ff);
	ft_printf("%+15.10o _ %+15.10o\n", f, ff);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%+10.5hho & %%+10.5lo\n", e, e);
	printf("--------- printf ---------\n");
	   printf("%+10.5hho _ %+10.5lo\n", e, e);
	ft_printf("%+10.5hho _ %+10.5lo\n", e, e);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%lld & %lld : %%llo & %%llo\n", LONG_MIN, LONG_MAX);
	printf("--------- printf ---------\n");
	   printf("%llo _ %llo\n", LONG_MIN, LONG_MAX);
	ft_printf("%llo _ %llo\n", LONG_MIN, LONG_MAX);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%lld & %lld : %%llo & %%llo\n", LONG_MIN - 1, LONG_MAX + 1);
	printf("--------- printf ---------\n");
	   printf("%llo _ %llo\n", LONG_MIN - 1, LONG_MAX + 1);
	ft_printf("%llo _ %llo\n", LONG_MIN - 1, LONG_MAX + 1);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%5.0o & %%+5.0o\n", e, e);
	printf("--------- printf ---------\n");
	   printf("%5.0o _ %+5.0o\n", e, e);
	ft_printf("%5.0o _ %+5.0o\n", e, e);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %% 05o & %% 05o\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("% 05o _ % 05o\n", b, bb);
	ft_printf("% 05o _ % 05o\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%#10.5o & %%#10.5o\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%#10.5o _ %#10.5o\n", b, bb);
	ft_printf("%#10.5o _ %#10.5o\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%#0.5o & %%#0.5o\n", c, cc);
	printf("--------- printf ---------\n");
	   printf("%#0.5o _ %#0.5o\n", c, cc);
	ft_printf("%#0.5o _ %#0.5o\n", c, cc);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%#10o & %%#10o\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%#10o _ %#10o\n", b, bb);
	ft_printf("%#10o _ %#10o\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n\033[0m");
}
//-----------------------------------------------------------------------------

//---------------------------------------------------------------------- FLAG x
i = 0;

if (av[1][0] == 'x' || av[1][0] == 'X')
{
int		iii = 31;
	printf("\033[32m\n\n---------- FLAG x, X --------\n");
	printf("--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%x & %%x\n", a, aa);
	printf("--------- printf ---------\n");
	   printf("%x _ %x\n", a, aa);
	ft_printf("%x _ %x\n", a, aa);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%#x & %%#x\n", a, aa);
	printf("--------- printf ---------\n");
	   printf("%#x _ %#x\n", a, aa);
	ft_printf("%#x _ %#x\n", a, aa);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%.3x & %%.3x\n", a, aa);
	printf("--------- printf ---------\n");
	   printf("%.3x _ %.3x\n", a, aa);
	ft_printf("%.3x _ %.3x\n", a, aa);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%#.3x & %%#.3x\n", a, aa);
	printf("--------- printf ---------\n");
	   printf("%#.3x _ %#.3x\n", a, aa);
	ft_printf("%#.3x _ %#.3x\n", a, aa);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%5x & %%5x\n", a, aa);
	printf("--------- printf ---------\n");
	   printf("%5x _ %5x\n", a, aa);
	ft_printf("%5x _ %5x\n", a, aa);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%5.3x & %%5.3x\n", a, aa);
	printf("--------- printf ---------\n");
	   printf("%5.3x _ %5.3x\n", a, aa);
	ft_printf("%5.3x _ %5.3x\n", a, aa);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%#-6.3x & %%#-6.3x\n", a, aa);
	printf("--------- printf ---------\n");
	   printf("%#-6.3x _ %#-6.3x\n", a, aa);
	ft_printf("%#-6.3x _ %#-6.3x\n", a, aa);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %% x & %% .3x\n", e, b);
	printf("--------- printf ---------\n");
	   printf("% x _ % .3x\n", e, b);
	ft_printf("% x _ % .3x\n", e, b);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%x & %%x\n", c, cc);
	printf("--------- printf ---------\n");
	   printf("%x _ %x\n", c, cc);
	ft_printf("%x _ %x\n", c, cc);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%ld & %ld : %%x & %%x\n", d, dd);
	printf("--------- printf ---------\n");
	   printf("%x _ %x\n", d, dd);
	ft_printf("%x _ %x\n", d, dd);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%x & %%.x\n", e, e);
	printf("--------- printf ---------\n");
	   printf("%x _ %.x\n", e, e);
	ft_printf("%x _ %.x\n", e, e);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%.3x & %%.3x\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%.3x _ %.3x\n", b, bb);
	ft_printf("%.3x _ %.3x\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%5.3x & %%5.3x\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%5.3x _ %5.3x\n", b, bb);
	ft_printf("%5.3x _ %5.3x\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%-5.3x & %%-5.3x\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%-5.3x _ %-5.3x\n", b, bb);
	ft_printf("%-5.3x _ %-5.3x\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%-+5.3x & %%-+5.3x\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%-+5.3x _ %-+5.3x\n", b, bb);
	ft_printf("%-+5.3x _ %-+5.3x\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%-05.3x & %%-05.3x\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%-05.3x _ %-05.3x\n", b, bb);
	ft_printf("%-05.3x _ %-05.3x\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%-0+5.3x & %%-0+5.3x\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%-0+5.3x _ %-0+5.3x\n", b, bb);
	ft_printf("%-0+5.3x _ %-0+5.3x\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%-0 5.3x & %%-0 5.3x\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%-0 5.3x _ %-0 5.3x\n", b, bb);
	ft_printf("%-0 5.3x _ %-0 5.3x\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%+4.3x & %%+4.3x\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%+4.3x _ %+4.3x\n", b, bb);
	ft_printf("%+4.3x _ %+4.3x\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%-0 5x & %% 5x\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%-0 5x _ % 5x\n", b, bb);
	ft_printf("%-0 5x _ % 5x\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%+10.5x & %%.5x\n", e, e);
	printf("--------- printf ---------\n");
	   printf("%+10.5x _ %.5x\n", e, e);
	ft_printf("%+10.5x _ %.5x\n", e, e);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%5.3llx & %%5.3llx\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%5.3llx _ %5.3llx\n", b, bb);
	ft_printf("%5.3llx _ %5.3llx\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%+5.3llx & %%+-5.3llx\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%+5.3llx _ %+-5.3llx\n", b, bb);
	ft_printf("%+5.3llx _ %+-5.3llx\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%ld & %ld : %%5.3lx & %%5.3lx\n", d, dd);
	printf("--------- printf ---------\n");
	   printf("%5.3lx _ %5.3lx\n", d, dd);
	ft_printf("%5.3lx _ %5.3lx\n", d, dd);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%3.5hhx & %%-.3hx\n", f, ff);
	printf("--------- printf ---------\n");
	   printf("%3.5hhx _ %-.3hx\n", f, ff);
	ft_printf("%3.5hhx _ %-.3hx\n", f, ff);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%+15.10llx & %%+15.10llx\n", f, ff);
	printf("--------- printf ---------\n");
	   printf("%+15.10x _ %+15.10x\n", f, ff);
	ft_printf("%+15.10x _ %+15.10x\n", f, ff);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%+10.5hhx & %%+10.5lx\n", e, e);
	printf("--------- printf ---------\n");
	   printf("%+10.5hhx _ %+10.5lx\n", e, e);
	ft_printf("%+10.5hhx _ %+10.5lx\n", e, e);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%lld & %lld : %%llx & %%llx\n", LONG_MIN, LONG_MAX);
	printf("--------- printf ---------\n");
	   printf("%llx _ %llx\n", LONG_MIN, LONG_MAX);
	ft_printf("%llx _ %llx\n", LONG_MIN, LONG_MAX);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%lld & %lld : %%llx & %%llx\n", LONG_MIN - 1, LONG_MAX + 1);
	printf("--------- printf ---------\n");
	   printf("%llx _ %llx\n", LONG_MIN - 1, LONG_MAX + 1);
	ft_printf("%llx _ %llx\n", LONG_MIN - 1, LONG_MAX + 1);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%5.0o & %%+5.0o\n", e, e);
	printf("--------- printf ---------\n");
	   printf("%5.0x _ %+5.0x\n", e, e);
	ft_printf("%5.0x _ %+5.0x\n", e, e);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %% 05x & %% 05x\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("% 05x _ % 05x\n", b, bb);
	ft_printf("% 05x _ % 05x\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, iii);
	printf("%d & %d : %%#x & %%#x\n", 1, -1);
	printf("--------- printf ---------\n");
	   printf("%#x _ %#x\n", 1, -1);
	ft_printf("%#x _ %#x\n", 1, -1);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n\033[0m");



}
//-----------------------------------------------------------------------------


//---------------------------------------------------------------------- FLAG U

i = 0;

if (av[1][0] == 'u')
{
int		ii = 24;
	printf("\033[35m\n\n---------- FLAG U ---------\n");
	printf("--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%u & %%u\n", a, aa);
	printf("--------- printf ---------\n");
	   printf("%u _ %u\n", a, aa);
	ft_printf("%u _ %u\n", a, aa);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %% u & %% .3u\n", e, b);
	printf("--------- printf ---------\n");
	   printf("% u _ % .3u\n", e, b);
	ft_printf("% u _ % .ud\n", e, b);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%u & %%u\n", c, cc);
	printf("--------- printf ---------\n");
	   printf("%u _ %u\n", c, cc);
	ft_printf("%u _ %u\n", c, cc);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%ld & %ld : %%u & %%u\n", d, dd);
	printf("--------- printf ---------\n");
	   printf("%u _ %u\n", d, dd);
	ft_printf("%u _ %u\n", d, dd);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%u & %%.u\n", e, e);
	printf("--------- printf ---------\n");
	   printf("%u _ %.u\n", e, e);
	ft_printf("%u _ %.u\n", e, e);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%.3u & %%.3u\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%.3u _ %.3u\n", b, bb);
	ft_printf("%.3u _ %.3u\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%5.3u & %%5.3u\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%5.3u _ %5.3u\n", b, bb);
	ft_printf("%5.3u _ %5.3u\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%-5.3u & %%-5.3u\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%-5.3u _ %-5.3u\n", b, bb);
	ft_printf("%-5.3u _ %-5.3u\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%-+5.3u & %%-+5.3u\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%-+5.3u _ %-+5.3u\n", b, bb);
	ft_printf("%-+5.3u _ %-+5.3u\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%-05.3u & %%-05.3u\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%-05.3u _ %-05.3u\n", b, bb);
	ft_printf("%-05.3u _ %-05.3u\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%-0+5.3u & %%-0+5.3u\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%-0+5.3u _ %-0+5.3u\n", b, bb);
	ft_printf("%-0+5.3u _ %-0+5.3u\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%-0 5.3u & %%-0 5.3u\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%-0 5.3u _ %-0 5.3u\n", b, bb);
	ft_printf("%-0 5.3u _ %-0 5.3u\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%+4.3u & %%+4.3u\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%+4.3u _ %+4.3u\n", b, bb);
	ft_printf("%+4.3u _ %+4.3u\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%-0 5u & %% 5u\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%-0 5u _ % 5u\n", b, bb);
	ft_printf("%-0 5u _ % 5u\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%+10.5u & %%.5u\n", e, e);
	printf("--------- printf ---------\n");
	   printf("%+10.5u _ %.5u\n", e, e);
	ft_printf("%+10.5u _ %.5u\n", e, e);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%5.3llu & %%5.3llu\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%5.3llu _ %5.3llu\n", b, bb);
	ft_printf("%5.3llu _ %5.3llu\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%+5.3llu & %%+-5.3llu\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("%+5.3llu _ %+-5.3llu\n", b, bb);
	ft_printf("%+5.3llu _ %+-5.3llu\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%ld & %ld : %%5.3lu & %%5.3lu\n", d, dd);
	printf("--------- printf ---------\n");
	   printf("%5.3lu _ %5.3lu\n", d, dd);
	ft_printf("%5.3lu _ %5.3lu\n", d, dd);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%3.5hhu & %%-.3hu\n", f, ff);
	printf("--------- printf ---------\n");
	   printf("%3.5hhu _ %-.3hu\n", f, ff);
	ft_printf("%3.5hhu _ %-.3hu\n", f, ff);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%+15.10llu & %%+15.10llu\n", f, ff);
	printf("--------- printf ---------\n");
	   printf("%+15.10u _ %+15.10u\n", f, ff);
	ft_printf("%+15.10u _ %+15.10u\n", f, ff);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%+10.5hhu & %%+10.5lu\n", e, e);
	printf("--------- printf ---------\n");
	   printf("%+10.5hhu _ %+10.5lu\n", e, e);
	ft_printf("%+10.5hhu _ %+10.5lu\n", e, e);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%lld & %lld : %%llu & %%llu\n", LONG_MIN, LONG_MAX);
	printf("--------- printf ---------\n");
	   printf("%llu _ %llu\n", LONG_MIN, LONG_MAX);
	ft_printf("%llu _ %llu\n", LONG_MIN, LONG_MAX);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%llu & %llu : %%llu & %%llu\n", LONG_MIN - 1, LONG_MAX + 1);
	printf("--------- printf ---------\n");
	   printf("%llu _ %llu\n", LONG_MIN - 1, LONG_MAX + 1);
	ft_printf("%llu _ %llu\n", LONG_MIN - 1, LONG_MAX + 1);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %%5.0u & %%+5.0u\n", e, e);
	printf("--------- printf ---------\n");
	   printf("%5.0u _ %+5.0u\n", e, e);
	ft_printf("%5.0u _ %+5.0u\n", e, e);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%d & %d : %% 05u & %% 05u\n", b, bb);
	printf("--------- printf ---------\n");
	   printf("% 05u _ % 05u\n", b, bb);
	ft_printf("% 05u _ % 05u\n", b, bb);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%llu : %%u\n", ULONG_MAX);
	printf("--------- printf ---------\n");
	   printf("%u\n", ULONG_MAX);
	ft_printf("%u\n", ULONG_MAX);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%llu : %%llu\n", ULONG_MAX);
	printf("--------- printf ---------\n");
	   printf("%llu\n", ULONG_MAX);
	ft_printf("%llu\n", ULONG_MAX);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n");


	printf("\n\n--------------------------\n");
	printf("------ test %d/%d ------\n", i++, ii);
	printf("%llu + 1 : %%llu\n", ULONG_MAX);
	printf("--------- printf ---------\n");
	   printf("%llu\n", ULONG_MAX + 1);
	ft_printf("%llu\n", ULONG_MAX + 1);
	printf("-------- ft_printf -------\n");
	printf("--------------------------\n\033[0m");

}

//-----------------------------------------------------------------------------


//---------------------------------------------------------------------- FLAG F
if (av[1][0] == 'f')
{



}
//-----------------------------------------------------------------------------


	return (0);
}
