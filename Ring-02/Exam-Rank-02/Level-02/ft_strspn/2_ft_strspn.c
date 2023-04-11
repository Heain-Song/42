#include <stdio.h>
#include <string.h>

char ft_strchr(const char *accept, char s)
{
	int i = 0;

	while (accept[i] != '\0')
	{
		if (accept[i] == s)
			return (accept[i]);
		i++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;

	while(s[i] != '\0')
	{
		if (ft_strchr(accept, s[i]))
			break;
		i++;
	}
	return (i);
}


int main()
{
	const char *s = "This is the.";
	const char *accept = "axel";

	printf("strspn: %ld\n" , strspn(s, accept));
	printf("ft_strspn: %ld\n" ,ft_strspn(s, accept));

	return (0);
}

