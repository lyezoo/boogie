/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 22:08:46 by lyhamrou          #+#    #+#             */
/*   Updated: 2019/02/11 03:09:18 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "../libft/libft.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

typedef struct	pos_n_len
{
	int		p;
	int		l;
}				t_pos_n_len;

typedef struct	s_flg
{
	int		h;
	int		less;
	int		plus;
	int		z;
	int		s;
	int		w;
	int		p;
	int		t;//1 = h, 2 = hh, 3 = l et 4 = ll
}				t_flg;

typedef struct	s_aff
{
	int		z_arg;
	char	sign1;
	int		s1;
	int		z1;
	char	sign2;
	int		s2;
	int		neg;
}				t_aff;

/*
size_t		ft_intchr(char const *s, char const *accept);
int			ft_atoi(char const *str);
char		*ft_strdup(char const *str);
size_t		number_of_digit(long nb);
size_t		number_of_digit_base(long nb, unsigned int base);
size_t		number_of_digit_base_u(unsigned long nb, unsigned int base);
char		*ft_strsub(char const *str, unsigned int start, size_t len);
size_t		ft_strlen(char const *str);
void		ft_putstr(char const *s);
void		ft_putchar(char c);
void		ft_putnbr_l(long nb);
void		ft_putnbr_base(long nb, unsigned int base);
void		ft_putnbr_base_u(unsigned long nb, unsigned int base);
void		ft_putnbr_base_u_maj(unsigned long nb, unsigned int base);
void		ft_putnbr_ul(long nb);
int			find_char_in_str(char c, char *str);
*/

void		ft_putnbr_base_u_maj(unsigned long nb, unsigned int base);
int			convert_int_to_ll(char c, t_flg flg, va_list ap);
int			convert_int_to_hh(char c, t_flg flg, va_list ap);
int			initialize_pl(t_pos_n_len *pl);
void		initialize_flg(t_flg *flg);
void		initialize_aff(t_aff *aff);

int			aff_c(t_flg flg, int c);
int			number_of_byts_write_c(t_flg flg);

int			aff_s(t_flg flg, char *s);
int			number_of_byts_write_s(t_flg flg, char *s);

void		adjust_flg_p(t_flg flg, unsigned long p);
int			aff_p(t_flg flg, unsigned long p);
int			number_of_byts_write_p(t_aff aff, unsigned long p);

int			aff_integer(char c, t_flg flg, va_list ap);

void		adjust_flg_n_aff_di(t_aff *aff, t_flg *flg, long long *i);
t_aff		adjust_aff_di(t_aff aff, t_flg flg, long long i);
int			aff_di(t_flg flg, long long di);
int			number_of_byts_write_di(t_aff aff, long long di);

void		adjust_flg_n_aff_o(t_aff *aff, t_flg *flg, unsigned long *i);
t_aff		adjust_aff_o(t_aff aff, t_flg flg, unsigned long i);
int			aff_o(t_flg flg, unsigned long o);
int			number_of_byts_write_o(t_aff aff, unsigned long o);

void		adjust_flg_n_aff_u(t_aff *aff, t_flg *flg, uintmax_t *i);
t_aff		adjust_aff_u(t_aff aff, t_flg flg, uintmax_t i);
int			aff_u(t_flg flg, uintmax_t u);
int			number_of_byts_write_u(t_aff aff, uintmax_t u);

void		adjust_flg_n_aff_x(t_aff *aff, t_flg *flg, unsigned long *i);
t_aff		adjust_aff_x(t_aff aff, t_flg flg, unsigned long i);
int			aff_x(t_flg flg, unsigned long x);
int			number_of_byts_write_x(t_aff aff, unsigned long x);

void		adjust_flg_n_aff_x_maj(t_aff *aff, t_flg *flg, unsigned long *i);
t_aff		adjust_aff_x_maj(t_aff aff, t_flg flg, unsigned long i);
int			aff_x_maj(t_flg flg, unsigned long X);
int			number_of_byts_write_x_maj(t_aff aff, unsigned long X);

void		adjust_flg_f(t_flg flg, float f);
int			aff_f(t_flg flg, float f);
int			number_of_byts_write_f(t_aff aff, float f);

int			ft_printf(char const *format, ...);
t_pos_n_len	parse_pos_len(char const *format, t_pos_n_len *pl, va_list ap);
void		pars_flag(t_flg *flg, char const *f, int i, int j);
int			flag_type(char const *f, int i, int j);
t_pos_n_len	error(t_pos_n_len pl);
int			find_arg_n_aff(char var, va_list ap, t_flg flg);
void		putfloat_precis(float f, int p);

#endif
