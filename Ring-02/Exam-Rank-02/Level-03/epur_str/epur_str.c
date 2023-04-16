#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2 && argv[1] != NULL)
	{
		int i = 0;
		char *str = argv[1];

		while (str[i] == ' ' || str[i] == '\t')
			i++;
		int t = first_alphabet;
		while (str[i] != '\0')
		{
			if (i == first_alphabet)
				write(1, &str[i], 1);
			else if (str[i] != ' ' && str[i] != '\t')
			{
				
				if (str[i - 1] == ' ' || str[i - 1] == '\t')
				{
					write(1, " ", 1);
					write(1, &str[i], 1);
				}
				else
					write(1, &str[i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
