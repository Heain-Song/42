#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				j = argv[1][i] - 96;
				while (j != 0)
				{
					write(1, &argv[1][i], 1);
					j--;
				}
			}
			else if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				j = argv[1][i] - 64;
				while (j != 0)
				{
					write(1, &argv[1][i], 1);
					j--;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

/* Issue & What I learned
	[Solved] Q1. Why it returns "\n" when the input is "abc"?
	I wrote "while (j == 0)" instead of "while(j != 0)". 

	[Solved] Q2. Where should j be initialized?
	It doesn't matter much here as j will be overwrote by the right-value everytime before use.
*/
