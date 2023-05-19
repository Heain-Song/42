#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	int i = 0;
	int j = 0;
	int tmp;

	while(i < (size - 1))
	{
		j = 0;
		while(j < (size - 1 - i))
		{
			if (tab[j + 1] < tab[j])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}

	i = 0;
	while (i < size)
	{	
		printf("%d ", tab[i]);
		i++;
	}
}

int main(void)
{
	int tab[] = {9, 17, 5, 6, 124, 112, 1, 3, 87, 55};
	unsigned int size = sizeof(tab) / sizeof(int);

	printf("BEFORE: ");
	int i = 0;
	while (i < size)
	{	
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	printf("AFTER: ");
	sort_int_tab(tab, size);

	return (0);


}
