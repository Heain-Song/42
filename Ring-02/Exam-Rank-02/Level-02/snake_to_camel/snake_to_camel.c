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
