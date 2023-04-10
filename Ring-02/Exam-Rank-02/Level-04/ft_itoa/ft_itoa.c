#include <stdlib.h>
#include <stdio.h>

int	ft_intlen(int nbr)
{
	int result = 1;
	
	if (nbr < 0)
		result++;
	while ((nbr / 10) != 0)
	{
		nbr /= 10;
		result++;
	}
	return (result);
}
void ft_itoa_str(int nbr)
{
	char tmp;

	if (nbr > 9)
		ft_itoa_str(nbr/10);
	tmp = (nbr % 10) + 48;
	write(1, &tmp, 1);
}

char *ft_itoa(int nbr)
{
	char *result;
	int i = 0;
	int intlen = ft_intlen(nbr);

	result = malloc(sizeof(char) * intlen + 1);
	if (!result)
		return NULL;
	
	if (nbr < 0)
	{
		result[0] = '-';
		i = 1;
		while (i < intlen)
		{

		i++;
		}
	}

	return (result);
}

int main(void)
{
	int nbr = 12;

	printf("%s\n", ft_itoa(nbr));
	//printf("%d\n", ft_intlen(nbr));
	return (0);
}
