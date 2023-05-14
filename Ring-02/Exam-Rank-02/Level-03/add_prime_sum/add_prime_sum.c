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

/* second try(14. May. 2023)

#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nbr)
{
	char tmp;
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	tmp = (nbr % 10) + 48;
	write(1, &tmp, 1);
}

int is_prime(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n > 2)
	{
		int i = 2;
		while (i < n)
		{
			if ((n % i) == 0)
				return (0);
			i += 2;
		}
		return (1);
	}
}

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
	return (result);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int nbr = ft_atoi(argv[1]);
		
		if (nbr <= 1)
		{
			write(1, "0", 1);
			return (0);
		}
		else
		{
			int n = 1;
			int result = 0;
			while (n <= nbr)
			{
				if (is_prime(n))
					result += n;
				n++;
			}
			ft_putnbr(result);
		}
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0); 
}



*/
