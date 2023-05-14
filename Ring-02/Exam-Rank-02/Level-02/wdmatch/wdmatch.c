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
	if (argc == 3)
	{
		int i = 0;
		int j = 0;

		char *s1 = argv[1];
		char *s2 = argv[2];

		int len = ft_strlen(s1);

		while (s1[i] != '\0')
		{
			j = 0;
			while(s2[j] != '\0')
			{
				//match found? save the position and check the length
				if (s1[i] == s2[j])
				{

						
				}

			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
