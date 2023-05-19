#include <stdio.h>
#include <stdlib.h>


int ft_size(char *str)
{
	int i = 0;
	int size = 0;
	int flag = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			size++;
			while(str[i] == ' ' || str[i] 

		}
		else
			size++;
	}
}



char *ft_strmod(char *str)
{
	char *new;
	int size = ft_size(str);





	int i = 0;

	while(str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
	i++;
	}
}







char **ft_split(char *str)
{
	char **result;
	char *new_str = ft_strmod(str);


}













int main(void)
{
	char *str = "           Hello         Bonjour        ";
	char **ret = ft_split(str);

	int i = 0;
	while(ret[i])
	{
		int j = 0;
		while (ret[i][j])
			printf("%c", ret[i][j++]);
		printf("\n");
		i++;
	}
	return (0);
}
