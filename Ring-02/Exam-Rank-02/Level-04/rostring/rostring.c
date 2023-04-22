#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		int i = 0;
		int flag = 0;
		int start = 0;
		int len = 0;
		char *str = argv[1];
		char *last_word;

		while (str[i] == ' ' || str[i] == '\t')
			i++;
		start = i;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
			i++;
		/*len = i;
		last_word = (char *)malloc(sizeof(char) * (len + 1));
		if (!last_word)
		{
			printf("MALLOC FAIL\n");
			return (0);
		}*/
		while (str[i] != '\0')
		{
			if (str[i] != ' ' && str[i] != '\t')
			{
				write(1, &str[i], 1);
				if (str[i + 1] != '\0' && (str[i + 1] == ' ' || str[i + 1] == '\t'))
					write (1, " ", 1);
			}
			i++;
		}
		if (str[i - 1] != ' ' && str[i - 1] != '\t')
		{
			write(1, " ", 1);
		}
		while (str[start] != ' ' && str[start] != '\t' && str[start] != '\0')
		{
			write(1, &str[start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
