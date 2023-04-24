#include <unistd.h>

int is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	else
		return (0);
}

int main(int argc, char **argv)
{
	if (argc == 2 && argv[1] != NULL)
	{
		int i = 0;
		int flag = 0;
		char *str = argv[1];

		while (is_space(str[i]))
			i++;
		flag = i;
		while (str[i] != '\0')
		{
			if (!is_space(str[i]))
			{
				if ((i - 1) > flag && is_space(str[i - 1]))
					write(1, "   ", 3);
				write(1, &str[i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
