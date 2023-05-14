#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

	printf("swap a: %d\n", a);
	printf("swap b: %d\n", b);
}

int main(void)
{
	int *a = 1;
	int *b = 2;

	printf("a: %d\n", a);
	printf("b: %d\n", b);

	ft_swap(a, b);
	printf("AFTER\n");
	printf("a: %d\n", a);
	printf("b: %d\n", b);

	return (0);
}
