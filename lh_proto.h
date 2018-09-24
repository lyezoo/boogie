#ifndef LH_PROTO_H
# define LH_PROTO_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <strings.h>

void			ft_putchar(char c);
void			ft_putnbr(int n);
void			ft_putstr(char *str);
int				ft_strcmp(char *s1, char *s2);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
int				ft_strlen(char *str);
char			**ft_split_whitespaces(char *str);
int				ft_atoi(char *str);
void			ft_putnbr(int nb);
char			*ft_strdup(char *str);
char			*ft_strndup(char *str, int n);
char			*ft_strcat(char *src, char *dest);
char			*ft_strncat(char *src, char *dest, unsigned int n);
unsigned int	ft_strlcat(char *src, char *dest, unsigned int size);
char			*ft_strstr(char *str, char *to_find);
char			*ft_strnstr(char *str, char *to_find, unsigned int n);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
char			*ft_strcpy(char *dest, char *src);
int				ft_isalpha(int c);
int				ft_isalnum(int c);
int				ft_isdigit(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(char *s, int c);
char			*ft_strrchr(char *s, int c);
void			ft_bzero(void *s, size_t n);
void			*ft_memset(void *s, int c, size_t n);
void			*ft_memcpy(void *dest, void *src, size_t n);
void			*ft_memccpy(void *dest, void *src, int c, size_t n);
int				ft_memcmp(void *dest, void *src, size_t n);
void			*ft_memchr(void *s, int c, size_t n);
void			*ft_memmove(void *dest, void *src, size_t n);
char			*ft_itoa(int n);
void			ft_putchar_fd(char c, int fd);
char			**ft_strsplit(char *s, char c);
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

#endif
