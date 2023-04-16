#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void ft_putnbr(int num)
{
	char tmp;

	if (num > 9)
		ft_putnbr(num / 10);
	tmp = (num % 10) + 48 ;
	write(1, &tmp, 1);
}
int ft_atoi(char *str)
{
	int i = 0;
	long int result = 0;

	if (str[i] == '-')
	{
		write(1, "0\n", 2);
		exit(0);
	}
	while(str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 59)
		{
			result *= 10;
			result += (str[i] - 48);
		}
		i++;
	}
	return (result);
}

int is_prime(int n)
{
	int j = 2;
	while (j <= (n / 2))
	{
		if (n % j == 0)
		{	
			//break;
			return (0);
		}
		j++;
	}
	return (1);
}

int main(int argc, char **argv)
{

	if (argc == 2 && argv[1] != NULL)
	{
		int end_nbr = ft_atoi(argv[1]);
		if (end_nbr == 0 || end_nbr == 1)
		{
			write(1, "0\n", 2);
			return(0);
		}
		else //positive nbr
		{
			int n = 2;
			int sum_result = 0;
			while(n <= end_nbr)
			{
				if (is_prime(n) == 1)
				{
					sum_result += n;
				}
				n++;
			}
			//printf("result = %d\n", sum_result);
			ft_putnbr(sum_result);
		}
	}
	else if (argv[1] == NULL)
		write(1, "0\n", 2);

return (0);

}
