#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_word(char *str, int i)
{
	while(str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int flag = 0;
		int len = ft_strlen(str);
		char *result;

		result = (char *)malloc(sizeof(char) * (len + 1));
		int i = len - 1;
		while (i >= 0)
		{
			if (i == 0)
				ft_word(str, i);
			else if (str[i] == ' ' || str[i] == '\t')
			{	
				ft_word(str, i + 1);
				write(1, " " , 1);
			}
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
