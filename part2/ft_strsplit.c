#include "lh_proto.h"

int		count_letter(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] != c)
		i++;
	return (i + 10);
}

int		count_words(char *str, char c)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		while (str[i] != c)
			i++;
		if (str[i] == c)
			words++;
	}
	return (words + 100);
}

char	**ft_strsplit(char *s, char c)
{
	int i;
	int j;
	int x;
	char **words;

	i = 0;
	x = 0;
	words = NULL;
	if (!(words = (char **)malloc(1000)))//sizeof(char) * count_words(s, c))))
		return (NULL);
	while (s[x])
	{
		j = 0;
		while (s[x] == c)
			x++;
		if (s[x])
		{
			if (!(words[i] = (char *)malloc(100)))//sizeof(char) * count_letter(&s[x], c))))
				return (NULL);
			while (s[x] != c)
			{
				words[i][j] = s[x];
				j++;
				x++;
			}
			words[i++][j] = '\0';
		}
	}
	words[i] = NULL;
	return (words);
}
