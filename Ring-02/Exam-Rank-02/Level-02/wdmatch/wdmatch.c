#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int count = 0;
	int start = 0;
	int flag = 0;

	char *s1 = argv[1];
	char *s2 = argv[2];

	while (s1[i] != '\0')
	{
		j = start;
		while(s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				count++;
				start = j;
				break;
			}
			j++;
		}
		i++;
	}
	if (count == ft_strlen(s1))
	{
		i = 0;
		while(s1[i] != '\0')
		{
			write(1, &s1[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
