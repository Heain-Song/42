#include <unistd.h>

void ft_putnbr(int nbr)
{
	char tmp;

	if (nbr > 9)
		ft_putnbr(nbr / 10);
	tmp = (nbr % 10) + 48;
	write(1, &tmp, 1);
}

int is_prime(int p)
{
	int i = 2;

	while (i <= (p / 2))
	{
		if (p % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int ft_atoi(char *str)
{
	int i = 0;
	int result;

	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = (result * 10) + (str[i] - 48);
		else
			return(-1);
		i++;
	}
	return (result);
}

int main(int argc, char **argv)
{
	int nbr = ft_atoi(argv[1]);

	if (argc == 2 && nbr > 0)
	{
		int p = 2; // prime number starts from 2
		int result = 0;

		while (p <= nbr)
		{
			if (is_prime(p) == 1)
				result += p;
			p++;
		}
		ft_putnbr(result);
	}
	else
		write (1, "0", 1);
	write(1, "\n", 1);
	return (0);
}

