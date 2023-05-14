#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	char tmp;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == '_')
			{
				tmp = argv[1][i + 1] - 32; 
				write(1, &tmp, 1);
				i++;
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

/*second try(14.May.2023)

#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int i = 0;
		char tmp;

		while(str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				if ((i != 0) && (str[i - 1] == '_'))
				{
					tmp = str[i] - 32;
					write(1, &tmp, 1);
				}
				else
					write(1, &str[i], 1);
			}
			else
			{
				if (str[i] != '_')
					write(1, &str[i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}

*/
