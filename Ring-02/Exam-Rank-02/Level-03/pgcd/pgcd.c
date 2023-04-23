#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int nbr)
{
	char tmp;

	if (nbr > 9)
		ft_putnbr(nbr / 10);
	tmp = (nbr % 10) + 48;
	write(1, &tmp, 1);
}

int ft_max(int n1, int n2)
{
	if (n1 > n2)
		return (n1);
	return (n2);
}

int	ft_min(int n1, int n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int n1 = atoi(argv[1]);
		int n2 = atoi(argv[2]);
		int min = ft_min(n1, n2);
		int max = ft_max(n1, n2);
		int i = 1;
		int result;

		while (i <= (min / 2))
		{
			if (min % i == 0)
			{
				if (max % i == 0)
				{
					result = i;
				}
			}
			i++;
		}
		ft_putnbr(result);
	}
	write(1, "\n", 1);
	return (0);
}
