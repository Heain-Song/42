#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	if (argc == 2 && argv[1] != NULL)
	{
		char *str = argv[1];
		int i = ft_strlen(str) - 1;
		
		while (str[i] == ' ' || str[i] == '\t')
			i--;
		int end = i;
		while(str[i] != ' ' && str[i] != '\t')
			i--;
		int start = i + 1;
		while(start <= end)
		{
			write(1, &str[start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
