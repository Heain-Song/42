#include <unistd.h> //write
#include <stdlib.h> //exit

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}

int main(int argc, char **argv)
{
	int i;
	int strlen_argv2;
	int strlen_argv3;

	i = 0;
	strlen_argv2 = ft_strlen(argv[2]);
	strlen_argv3 = ft_strlen(argv[3]);
	if (argc == 4 && strlen_argv2 == 1 && strlen_argv3 == 1)
	{
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] == argv[2][0])
				write(1, &argv[3][0], 1);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


/*
$>./search_and_replace "Papache est un sabre" "a" "o"
argv[0] argv[1] argv[2] argv[3]
*/
