#include <unistd.h>

int main (int argc, char **argv)
{	
	int i;
	char tmp;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				write(1, "_", 1);
				tmp = argv[1][i] + 32;
				write(1, &tmp, 1);
			}
			else
				write(1, &argv[1][i], 1);	
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
