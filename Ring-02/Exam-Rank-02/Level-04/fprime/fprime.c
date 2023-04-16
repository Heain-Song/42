#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int nbr = atoi(argv[1]);

		if (nbr == 1)
			write(1, "1", 1);
		else
		{

		}

	}
	write(1, "\n", 1);
	return (0);
}
