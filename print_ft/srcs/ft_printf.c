/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 19:42:53 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/02/11 03:04:46 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

int			flag_type(char const *f, int i, int j)
{
	int		size;

	size = i + j;
	while (i < size)
	{
		if (f[i] == 'h')
		{
			if (f[i + 1] == 'h')
				return (2);
			return (1);
		}
		else if (f[i] == 'l')
		{
			if (f[i + 1] == 'l')
				return (4);
			return (3);
		}
		++i;
	}
	return (0);
}

void		pars_flag(t_flg *flg, char const *f, int i, int j)
{
	int		x;

	x = i;
	while (i < j - 1)
	{
		if (f[i] == '#')
			flg->h = 1;
		if (f[i] == '-')
			flg->less = 1;
		if (f[i] == '+')
			flg->plus = 1;
		if (f[i] == '0' && (!(f[i - 1] >= '0' && f[i - 1] <= '9')))
			flg->z = 1;
		if (f[i] == ' ')
			flg->s = 1;
		if (f[i] == '.')
			break ;
		++i;
	}
	while (f[i - 1] && (f[i - 1] >= '0' && f[i - 1] <= '9'))
		--i;
	while (i < j && (f[i] >= '0' && f[i] <= '9'))
		flg->w = flg->w * 10 + f[i++] - '0';
	if (f[i] == '.')
		flg->p = ft_atoi((char *)&f[i + 1]);
	flg->t = flag_type(f, x, j);
}

int			find_arg_n_aff(char c, va_list ap, t_flg flg)
{
	int		i;

	i = 0;
	if (c == 'c')
		i = aff_c(flg, va_arg(ap, int));
	else if (c == 's')
		i = aff_s(flg, va_arg(ap, char *));
	else if (c == 'p')
		i = aff_p(flg, va_arg(ap, long));
	else if (find_char_in_str(c, "diouxX") == 1)
		i = aff_integer(c, flg, ap);
/*	else if (c == 'u')
		i = aff_u(flg, va_arg(ap, int));
*/	else if (c == 'f')
		i = aff_f(flg, (float)va_arg(ap, double));
	else
		i = -1;//creer fct error2
	return (i);
}

t_pos_n_len	parse_pos_len(char const *f, t_pos_n_len *pl, va_list ap)
{
	int		pos;
	t_flg	flg;

	if ((pos = ft_intchr(&f[pl->p], "cspdiouxX")) == -1)
		return (error(*pl));
	initialize_flg(&flg);
	pars_flag(&flg, f, pl->p, pl->p + pos + 1);
	pl->l = pl->l + find_arg_n_aff(f[pl->p + pos], ap, flg);
	pl->p = pl->p + pos + 1;
	return (*pl);
}

int			ft_printf(char const *f, ...)
{
	int			i;
	t_pos_n_len	pl;
	va_list		ap;

	va_start(ap, f);
	i = initialize_pl(&pl);
	while(f[pl.p] != '\0')
	{
		i = pl.p;
		while (f[pl.p] != '%' && f[pl.p] != '\0')
			pl.p++;
		write(1, &f[i], pl.p - i);
		pl.l = pl.l + pl.p - i;
		if (f[pl.p] == '%')
			pl = parse_pos_len(f, &pl, ap);
		if (pl.p == -1 || pl.l == -1)
			exit(0);
	}
	va_end(ap);
	return (pl.l);
}
