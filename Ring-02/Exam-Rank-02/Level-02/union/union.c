#include <unistd.h>
#include <stdio.h>
/*int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	char *str1 = argv[1];
	char *str2 = argv[2];

	if (argc == 3)
	{
		while (str1[i] != '\0')
		{
			while (str2[j] != 

		}
	}
	write(1, "\n", 1);
	return (0);
}*/



int main(int argc, char **argv)
{
	int ascii[127] = {0};

	int i;
	char *str1 = argv[1];
	char *str2 = argv[2];
	if (argc == 3)
	{	
		i = 0;
		while (str1[i])
		{
			//char c = str1[i];
			//int j = (int)c;

			int j = str1[i];
			if (ascii[j] == 0)
			{
				write(1, &str1[i], 1);
				ascii[j] = 1;
			}
			i++;
		}
		i = 0;
		while (str2[i])
		{
			char c = str2[i];
			int j = (int)c;
			if (ascii[j] == 0)
			{
				write(1, &str2[i], 1);
				ascii[j] = 1;
			}
			i++;
		}
	}
	write(1, "\n",1);
	return (0);
}
