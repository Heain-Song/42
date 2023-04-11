#include <unistd.h>

void	ft_capitalizer(char *str)
{
	int k = 0;
	char tmp;
	
	while(str[k] != '\0')
	{
		if (k == 0) // the first char of the entire string
		{
			if (str[k] >= 'a' && str[k] <= 'z') // lower case -> upper case
			{
				tmp = str[k] - 32;
				write(1, &tmp, 1);
			}
			else // otherwise all printout without changing
				write(1, &str[k], 1);
		}
		else // if it's not first char of string(middle or end)
		{
			if (str[k] != ' ' && str[k] != '\t') // if it's not space or tab
			{
				if (str[k - 1] == ' ' || str[k - 1] == '\t') // if it's a first word of each string
				{
					if (str[k] >= 'a' && str[k] <= 'z') //lower case -> upper case
					{
						tmp = str[k] - 32;
						write(1, &tmp, 1);
					}
					else
						write(1, &str[k], 1);
				}
				else // if it's not the first word of each string(middle or end)
				{
					if (str[k] >= 'a' && str[k] <= 'z')
						write(1, &str[k], 1);
					else if (str[k] >= 'A' && str[k] <= 'Z')
					{
						tmp = str[k] + 32;
						write(1, &tmp, 1);
					}
					else
						write(1, &tmp, 1);
				}
			}
			else // if it's space or tab
				write(1, &str[k], 1);
		}
		k++;
	}
}

int main(int argc, char **argv)
{
	int i = 1;

	if (argc >= 2)
	{
		while (i != argc)
		{
			ft_capitalizer(argv[i]);
			write(1, "\n", 1);
			i += 1;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
