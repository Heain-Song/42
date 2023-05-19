#include <unistd.h>
#include <stdio.h>

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
		int i = 0;
		int j = 0;
		int l = ft_strlen(str) - 1;

		while (l >= 0)
		{
			if (l == 0 || str[l] == ' ' || str[l] == '\t')
			{
				if (l == 0)
					j = l;
				else
					j = l + 1;
				while(str[j] != ' ' && str[j] != '\t' && str[j] != '\0')
				{
					write(1, &str[j], 1);
					j++;
				}
				if (l != 0)
					write(1, " ", 1);
			}
		l--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
