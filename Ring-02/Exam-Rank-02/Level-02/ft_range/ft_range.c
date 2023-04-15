#include <stdlib.h>
#include <stdio.h>

int ft_size(int start, int end)
{
	if (start > end)
		return (start - end + 1);
	else
		return (end - start + 1);
}

int	*ft_range(int start, int end)
{
	int *result;
	int size = ft_size(start, end);

	result = (int *)malloc(sizeof(int) * (size + 1));
	if (!result)
		return NULL;
	else
	{
		int i = 0;
		if (start > end)
		{
			while(i < size)
			{
				result[i] = start;
				printf("%d\n", result[i]);
				start--;
				i++;
			}
		}
		else
		{
			while(i < size)
			{
				result[i] = start;
				printf("%d\n", result[i]);
				start++;
				i++;
			}
		}
		result[i] = '\0';
		return (result);
	}
}

int main()
{
	int start = 0;
	int end = 0;
	ft_range(start, end);
	return (0);
}
