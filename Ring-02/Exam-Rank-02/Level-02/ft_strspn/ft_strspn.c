#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i;
	size_t j;
	size_t result;

	i = 0;
	j = 0;
	result = 0;
	while (accept[j] != '\0')
	{
		while (s[i] != '\0')
		{
			if (accept[j] == s[i])
			{
				if (result < i)
					result = i + 1; //matched point + 1 (length)
			}
			i++;
		}
		j++;
	}
	return (result);
}
