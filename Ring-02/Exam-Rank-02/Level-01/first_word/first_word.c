#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		if (argv[1][i] != ' ' || argv[1][i] != '\t')
		{
			while (argv[1][i] != ' ' || argv[1][i] == '\t' || argv[1][i] != '\0')
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}

/* A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

Q1. When the string starts with spaces/tabs, how am I going to distinguish them from spaces/tabs as a stop point?
*/
