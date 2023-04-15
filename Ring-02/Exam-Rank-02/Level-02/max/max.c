#include <stdio.h>

int ft_strlen(int *tab)
{
	int i = 0;
	while(tab[i])
		i++;
	return (i);
}

int	max(int* tab, unsigned int len)
{
	if (tab != NULL)
	{
		int i = 1;
		int result = tab[0];

		while(tab[i] != '\0')
		{
			if (tab[i] > tab[i - 1])
				result = tab[i];
			i++;
		}
		return (result);
	}
	else
		return (0);
}

int main(void)
{
	int tab[4] = {-2, -1, -3};
	unsigned int len = ft_strlen(tab);
	int m = max(tab, len);
	printf("max = %d\n", m);
	return (0);
}
