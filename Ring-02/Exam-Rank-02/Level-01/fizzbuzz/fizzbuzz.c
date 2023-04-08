#include <unistd.h>

void	ft_putnbr(int i)
{
	char tmp;
	char tmp2;

	if (i >= 0 && i <= 9)
	{	
		tmp = i + 48;
		write(1, &tmp, 1);
	}
	else
	{
		tmp = (i / 10) + 48;
		tmp2 = (i % 10) + 48;
		write(1, &tmp, 1);
		write(1, &tmp2, 1);
	}
	write(1, "\n", 1);
}

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			write(1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else
			ft_putnbr(i);
		i++;
	}
	return (0);
}
