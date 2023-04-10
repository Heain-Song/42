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
