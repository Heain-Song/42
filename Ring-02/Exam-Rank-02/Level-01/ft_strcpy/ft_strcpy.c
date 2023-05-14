/*#include <stdio.h>
#include <string.h>

*char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int main(void)
{
	char *s1;
	char *s2;

	s1 = "Hello";
	s2 = "Bonjour";
	
	//printf("ft_strcpy: %s\n",ft_strcpy(s1, s2));
	printf("strcpy; %s\n",strcpy(s1, s2));

	return (0);
}*/






#include <string.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s1 && s2 && s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int main(void)
{
	char *s1 = "Hello";
	char *s2 = "Bonjour";
	char *result1 = strcpy(s1, s2);
	char *result2 = ft_strcpy(s1, s2);

	printf("result1: %s\n", result1);
	printf("result2: %s\n", result2);

	return (0);
}
