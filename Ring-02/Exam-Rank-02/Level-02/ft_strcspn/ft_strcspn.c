#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while(reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

/*int main(void)
{
	const char *s = "Hello";
	const char *reject = "lo";
	
	size_t result = ft_strcspn(s, reject);
	printf("result: %ld\n", result);

	result = strcspn(s, reject);
	
	printf("result2: %ld\n", result);

	return (0);
}*/

