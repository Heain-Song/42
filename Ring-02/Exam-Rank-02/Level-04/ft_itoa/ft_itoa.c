#include <stdlib.h>
#include <stdio.h>

int ft_intlen(int nbr)
{
	int result = 0;
	if (nbr == 0)
		return (1);
	else 
	{
		if (nbr < 0)
		{
			result += 1;
			nbr *= -1;
		}
		while (nbr > 0)
		{	
			result += 1;
			nbr = nbr / 10;
		}
	}
	return (result);
}

char *ft_itoa(int nbr)
{
	char *result;
	int len = ft_intlen(nbr);

	result = malloc(sizeof(char) * (len + 1));
	int idx = len - 1;
	while (len > 0)
	{
		result[idx] = (nbr % 10) + 48;
		nbr = nbr / 10;
		len--;
		idx--;
	}
	result[idx + 1] = '\0';
	return (result);
}

int main()
{
	int nbr = 225225;
	printf("%s\n", ft_itoa(nbr));
	//printf("intlen = %d\n", ft_intlen(nbr));
	return (0);
}
