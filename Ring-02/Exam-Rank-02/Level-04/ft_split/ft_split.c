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





/* second try (14. May. 2023)
#include <stdlib.h>
#include <stdio.h>

int ft_wordlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			return (i);
		i++;
	}
	return (i);
}

int ft_wordcount(char *str)
{
	int i = 0;
	int result = 0;
	
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			result++;
		i++;
	}
	result++;
	return (result);
}

char    **ft_split(char *str)
{
	char **result;
	int wc = ft_wordcount(str);
	
	//the whole result malloc
	result = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!result)
		return (NULL);
	
	//the first string(result[0])
	int len = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n') 
		len++;
	result[0] = (char *)malloc(sizeof(char) * (len + 1));
	if (!result[0])
		return (NULL);

	result[k][j] = str[i]; // H
	result[0][1] = str[1]; // E
	result[0][2] = str[2]; // L
	result[0][3] = str[3]; // L
	result[0][4] = str[4]; // O
	result[0][5] = '\0';

	//the second string(result[1])

	result[1][0] = str[]; // B
	result[1][1] = str[7]; // O	
	result[1][2] = str[8]; // N
	result[1][3] = str[9]; // J
	result[1][4] = str[10]; // O
	result[1][5] = str[11]; // U
	result[1][6] = str[12]; // R
	result[1][7] = '\0';

	//While loop
	int i = 0;
	int j = 0;
	int k = 0;
	int len = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while(k < wc)
		{
			len = ft_wordlen(str + i);
			result[k] = (char *)malloc(sizeof(char) * (len + 1));
			result[k][j] = str[];
			j++;
		}
		k++;
	i++;
	}
	return (result);
}

int main(void)
{
	char *str = "Hello Bonjour";
	ft_split(str);
	return (0);
}

*/
