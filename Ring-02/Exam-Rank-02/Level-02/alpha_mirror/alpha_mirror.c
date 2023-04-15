#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		int i = 0;
		char tmp;

		while(str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				tmp = 122 - (str[i] - 97);
				write(1, &tmp, 1);
			}
			else if (str[i]>= 'A' && str[i] <= 'Z')
			{
				tmp = 90 - (str[i] - 65);
				write(1, &tmp, 1);
			}
			else
				write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
