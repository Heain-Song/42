#include <stdio.h>

unsigned int ft_min(unsigned int a, unsigned int b)
{
	if (a < b)
		return (a);
	return (b);
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int i;
	unsigned int result;

	i = 1;
	result = 0;
	
	unsigned int min = ft_min(a, b);
	while (i <= min)
	{
		if ( (a % i == 0) && (b % i == 0))
			result = i;
		i++;
	}
	return (result);
}


int main(void)
{
	int a = 0;
	int b = 2;
	printf("%d\n", lcm(a,b));
	return (0);
}
