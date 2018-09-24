#include "lh_proto.h"

int		count(char const *str)
{
	int i;
	int cpt;

	i = 0;
	cpt = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i])
	{
		i++;
		cpt++;
	}
	while (str[i-1] == ' ' || str[i-1] == '\t' || str[i-1] == '\n')
	{
		i--;
		cpt--;
	}
	return (cpt);
}

char	*ft_strtrim(char const *s)
{
	int i;
	int x;
	char *str;
	int num;

	i = 0;
	x = 0;
	num = count(s);
	str = NULL;
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
