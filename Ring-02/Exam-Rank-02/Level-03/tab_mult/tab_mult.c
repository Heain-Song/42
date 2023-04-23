#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int result = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = (result * 10) + (str[i] - 48);
		else
			return (-1);
		i++;
	}
	return(result);
}

void ft_putnbr(int nbr)
{
	char tmp;

	if (nbr > 9)
		ft_putnbr(nbr / 10);
	tmp = (nbr % 10) + 48;
	write(1, &tmp, 1);
}

void ft_mult(int mult, int nbr)
{
	char m;
	char n;

	m = mult + 48;
	write(1, &m, 1);
	write(1, " x ", 3);
	ft_putnbr(nbr);
	write(1, " = ", 3);
	ft_putnbr(nbr * mult);
}


int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int nbr = ft_atoi(argv[1]);
		int mult = 1;

		if (nbr > 0)
		{
			while (mult <= 9)
			{
				ft_mult(mult, nbr);
				write(1, "\n", 1);
				mult++;
			}
		}
		
	}
	else
		write(1, "\n", 1);
	return (0);
}
