#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	char *dest = s1;
	char *src = s2;

	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

//my main

/*int main(void)
{
	char *s1 = "Hello"; //dest 
	char *s2 = "Bonjour"; //src

	printf("s1: %s\n", s1);
	ft_strcpy(s1, s2);
	printf("s1: %s\n", s1);
	//printf("ft_strcpy: %s\n", ft_strcpy(s1, s2));
	//printf("strcpy: %s\n", strcpy(s1, s2));
	return(0);
}*/

// with another main, it works.

int main(void)
{
	char str1[] = "hello";
	char str2[] = "bonjour";

	printf("%s\n", str1);   // displaying what str1 is before ft_strcpy is used on it
	ft_strcpy(str1, str2);  // calling out functtion ft_strcpy on the strings
	printf("%s\n", str1);  // str1 should now become str2
	return (0);
}
