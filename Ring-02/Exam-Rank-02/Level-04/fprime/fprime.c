#include <stdio.h>
#include <stdlib.h>

int is_prime(int nbr)
{
	if (nbr <= 1)
		return (0);
	int i = 2;
	while(i < nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);

}
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int nbr = atoi(argv[1]);

		if (nbr == 1)
			printf("1");
		
		else
		{
			int i = 2;
			while(i <= nbr)
			{
				if (is_prime(i) == 1)
				{
					if (nbr % i == 0)
					{
						printf("%d", i);
						nbr = nbr / i;
						if (nbr != 1)
							printf("*");
						i = 2;
					}
				}
				i++;
			}
		}

	}
	printf("\n");
	return (0);
}

/*
SUCCESS, but why it does not work when the argv[1] = 804577?

*/
