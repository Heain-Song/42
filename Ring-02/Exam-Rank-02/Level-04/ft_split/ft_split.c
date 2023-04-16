#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_count_word(char *str)
{
	int i = 0;
	int result = 0;

	if (str[i])
	{
		while (str[i] != '\0')
		{
			if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				result++;
			i++;
		}
		return (result + 1);
	}
	else
		return (0);

	/*while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			result++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}

	return(result);*/
}

char    **ft_split(char *str)
{
	char **result;
	int word = ft_count_word(str);

	result = (char **)malloc(sizeof(char *) * (word + 1));
	if (!result)
		return NULL;
	else
	{
		int i = 0;
		int j = 0;

		while(str[i] != '\0')
		{
			int len;
			len = 0;
			while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0') //'\0' 마지막 글자일 경우 확인하기 위해서 필요. 
			{
				len += 1;
				i++;
			}
			if (len >= 1)
			{
				char *word = (char *)malloc(sizeof(char) * (len + 1));
				result[j] = word;
				j++;
			}
			else
				i++;
		}
		i = 0;
		j = 0;
		int k = 0;
		while (str[i] != '\0')
		{
			if (str[i] != ' ')
			{
				while (j < word)
				{
				while(str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
				{
					result[j][k] = str[i];
					k++;
					i++;
				}
				result[j][k] = '\0';
				j++;
				k = 0;
				}
			}
			else
				i++;
		}
	}
	return (result);
}

int main(void)
{
	char *str = "Hello Bonjour Bye";
	char **result = ft_split(str);

	int i = 0;
	while (result[i])
	{
		printf("%s", result[i]);
		i++;
	}
	//printf("word count = %d\n", ft_count_word(str));
	return (0);
}
