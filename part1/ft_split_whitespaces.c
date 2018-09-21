#include "lh_proto.h"

int		count_letter(char *str)
{
	int i;

	i = 0;
	while (str[i] > ' ')
		i++;
	return (i + 10);
}

int		count_words(char *str)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		while (str[i] > ' ')
			i++;
		if (str[i] == ' ')
			words++;
	}
	return (words + 100);
}

char	**ft_split_whitespaces(char *str)
{
	int i;
	int j;
	int x;
	char **words;

	i = 0;
	x = 0;
	words = NULL;
	if (!(words = (char **)malloc(sizeof(char) * count_words(str))))
		return (NULL);
	while (str[x])
	{
		j = 0;
		while (str[x] == ' ')
			x++;
		if (str[x])
		{
			if (!(words[i] = (char *)malloc(sizeof(char) * count_letter(&str[x]))))
				return (NULL);
			while (str[x] > ' ')
			{
				words[i][j] = str[x];
				j++;
				x++;
			}
			words[i++][j] = '\0';
		}
	}
	words[i] = NULL;
	return (words);
}
