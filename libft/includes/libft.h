/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyhamrou <lyhamrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 23:59:40 by lyhamrou          #+#    #+#             */
/*   Updated: 2018/11/27 23:59:44 by lyhamrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

void			ft_putchar(char c);
void			ft_putnbr(int n);
void			ft_putstr(char const *s);
int				ft_strcmp(char const *s1, char const *s2);
int				ft_strncmp(char const *s1, char const *s2, size_t n);
size_t			ft_strlen(char const *s);
char			**ft_split_whitespaces(char *str);
int				ft_atoi(char const *str);
char			*ft_strdup(char const *str);
char			*ft_strndup(char const *str, size_t n);
char			*ft_strcat(char *dest, char const *src);
char			*ft_strncat(char *dest, char const *src, size_t n);
size_t			ft_strlcat(char *dest, char const *src, size_t size);
char			*ft_strstr(char const *s1, char const *s2);
char			*ft_strnstr(char const *s1, char const *s2, size_t n);
char			*ft_strncpy(char *dest, char const *src, size_t lenn);
char			*ft_strcpy(char *dest, char const *src);
int				ft_isalpha(int c);
int				ft_isalnum(int c);
int				ft_isdigit(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(char const *s, int c);
char			*ft_strrchr(char const *s, int c);
void			ft_bzero(void *s, size_t n);
void			*ft_memalloc(size_t size);
void			*ft_memset(void *s, int c, size_t n);
void			ft_memdel(void **ap);
void			*ft_memcpy(void *dest, void const *src, size_t n);
void			*ft_memccpy(void *dest, void const *src, int c, size_t n);
int				ft_memcmp(void const *dest, void const *src, size_t n);
void			*ft_memchr(void const *s, int c, size_t n);
void			*ft_memmove(void *dest, void const *src, size_t n);
char			*ft_itoa(int n);
void			ft_putchar_fd(char c, int fd);
char			**ft_strsplit(char const *s, char c);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strnew(size_t size);
char			*ft_strmap(char const *s, char(*f)(char));
char			*ft_strmapi(char const *s, char(*f)(unsigned int, char));
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strsub(char const *s, unsigned intstart, size_t len);
char			*ft_strjoin(char const *s1, char const*s2);
char			*ft_strtrim(char const *s);
void			ft_putendl(char const *s);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			*ft_strrev(char *str);
int				ft_recursive_power(int nb, int power);
int				ft_sqrt(int nb);
int				ft_is_prime(int nb);
int				ft_find_next_prime(int nb);
t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void(*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
