#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 1; // start from argv[1]
	char tmp;
	while (argv[i])
	{
		char *str = argv[i];
		//int l = ft_strlen(str);
		int j = 0; // reset j to 0 everytime starting to read an argv
		while(str[j] != '\0')
		{
			if ((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z'))// myself is a char
			{
				int l = ft_strlen(str);
			//	printf("ft_strlen = %d\n", l);
				if (j == l - 1) //last char of string -> upper case
				{
					if (str[j] >= 'a' && str[j] <= 'z') // lower case
					{
						tmp = str[j] - 32;
						write(1, &tmp, 1);
					}
					else // upper case
						write(1, &str[j], 1);
				}
				else // not last char of the string
				{
					if (str[j + 1] == ' ' || str[j + 1] == '\t') // the char next to myself is space -> upper letter
					{
						if (str[j] >= 'a' && str[j] <= 'z')
						{
							tmp = str[j] - 32;
							write(1, &tmp, 1);
						}
						else
							write(1, &str[j], 1);
					}
					else // myself is the beginning of a word or in the middle of a word
					{
						if (str[j] >= 'A' && str[j] <= 'Z') // upper case
						{
							tmp = str[j] + 32;
							write(1, &tmp, 1);
						}
						else // lower case
							write(1, &str[j], 1);
					}
				}
			}
			else // myself is not a char
				write(1, &str[j], 1);
		j++;
		}
		write(1, "\n", 1);

	i++;
	}
	return(0);
}
