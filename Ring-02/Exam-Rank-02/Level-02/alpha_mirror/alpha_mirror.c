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
			if (argv[1][i] >= 97 && argv[1][i] <= 109)
			{
				tmp = argv[1][i] + (25 - (2 *(argv[1][i] - 97)));
				write(1, &tmp, 1);
			}
			else if (argv[1][i] >= 65 && argv[1][i] <= 77)
			{
				tmp = argv[1][i] + (25 - (2 * (argv[1][i] - 65)));
				write(1, &tmp, 1);
			}
			else if (argv[1][i] >= 110 && argv[1][i] <= 122)
			{
				tmp = argv[1][i] - (25 - (2 * (122 - argv[1][i])));
				write(1, &tmp, 1);
			}
			else if (argv[1][i] >= 78 && argv[1][i] <= 90)
			{
				tmp = argv[1][i] - (25 - (2 * (90 - argv[1][i])));
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
