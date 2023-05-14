#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return(i);

}

int main(int argc, char **argv)
{
	char *str = argv[1];

	int l = ft_strlen(str);

	if (argc == 2)
	{
		while(l > 0)
		{
			write(1, &str[l - 1], 1);
			l--;
		}
	}
	write(1, "\n",1);
	return (0);
}


/* second try(14.May.2023)

#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		char *str = argv[1];

		while (str[i] != '\0')
			i++;

		int l = i - 1;
		while (l >= 0)
		{
			write(1, &str[l], 1);
			l--;
		}
	}

	write(1, "\n", 1);
	return (0);
}


*/
