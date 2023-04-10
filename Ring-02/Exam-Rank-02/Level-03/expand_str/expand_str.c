#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;

	char *str = argv[1];
	if (argc == 2)
	{
		while(str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i] != '\0')
		{		
			if (str[i] == ' ' || str[i] == '\t') 
			{
				if (str[i + 1] == '\0')
					break;
				if (str[i + 1] != ' ' && str[i + 1] != '\t')
					write(1, "   ", 3);
			}
			if (str[i] != ' ' && str[i] != '\t')
				write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n",1);
	return (0);
}
