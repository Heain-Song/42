#include <stdlib.h>

int		is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

int		is_null(char c)
{
	if (c == 0)
		return (1);
	return (0);
}

int		is_character(char c)
{
	if (!is_space(c) && !is_null(c))
		return (1);
	return (0);
}

char	**ft_split(char *str)
{
	int words;
	int	i;
	char **ret;
	int	len;
	char *tmp;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (is_character(str[i]))
		{
			if (is_space(str[i + 1]) || is_null(str[i]))
				words++;
		}
		i++;
	}
	ret = malloc(sizeof(char *) * (words + 1));
	ret[words] = 0;

	i = 0;
	int j = 0;
	int k;
	int	head;
	while (str[i])
	{
		while (is_space(str[i]))
			i++;
		if (is_null(str[i]))
			break;
		len = 0;
		head = i;
		while (is_character(str[i]))
		{
			len++;
			i++;
		}
		tmp = malloc(sizeof(char) *(len + 1));

		k = 0;
		while (k < len)
		{
			tmp[k] = str[head + k];
			k++;
		}
		tmp[k] = 0;
		ret[j] = tmp;
		j++;
		if (is_null(str[i]))
			break;
		i++;
	}
	return ret;
}

#include <stdio.h>
int main(void)
{
	char *str = "Hello       Bonjour Bye     ";
	char **result = ft_split(str);
	
	printf("%s\n", result[0]);
	printf("%s\n", result[1]);
	printf("%s\n", result[2]);
	return (0);
}
