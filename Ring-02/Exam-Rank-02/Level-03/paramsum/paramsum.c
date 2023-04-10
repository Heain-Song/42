#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char tmp;

	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	tmp = (nbr % 10) + 48;
	write(1, &tmp, 1);
}

int main(int argc, char **argv)
{
	(void)argv;

	if (argc == 1)
		write(1, "0", 1);
	else
		ft_putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}
