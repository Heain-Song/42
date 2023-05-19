#include <stdio.h>
#include <stdlib.h>

int ft_wordlen(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if (str[i] == ' ')
			return(i);
		i++;
	}
	return(i);
}

int     ft_wordcount(char *str)
{
		int i = 0;
		int wc = 0;

		while(str[i] != '\0')
		{
			if (str[i] == ' ')
				wc++;
			i++;
		}
		wc++;
		printf("new wc: %d\n", wc);
		return (wc);
}

int     ft_len(char *str)
{
        int i = 0;
		int len = 0;

        while (str[i] == ' ')
                i++;

        while(str[i] != '\0')
        {
                if (str[i] == ' ')
                {
                        i++;
						len++;
                        while(str[i] != '\0' && str[i] == ' ')
                                i++;

                }
				else
				{
					i++;
					len++;
				}
        }
		return (len);
}

char *ft_strmodify(char *str)
{
	char *s; 
	int i = 0;
	int len = ft_len(str);
	printf("len: %d\n", len);
	s = (char *)malloc(sizeof(char) * (len + 1));
	while (str[i] == ' ')
		i++;
	
	int j = 0;
	while(str[i] != '\0')
	{
		if ((i != 0) && str[i] == ' ')
		{
			while (str[i] == ' ')
				i++;
			if (str[i])
			{
				s[j++] = str[i-1];
			}
		}
		else
		{
			s[j++] = str[i++];
		}
	}
	return(s);
}

char    **ft_split(char *str)
{
        char **result;
		char *nstr = ft_strmodify(str);

        int wc = ft_wordcount(nstr);
        result = (char **)malloc(sizeof(char *) * (wc + 1));
        if (!result)
                return NULL;

		int k = 0;
		int beforelen = 0;
		int wl;
		while(k < wc)
		{
			wl = ft_wordlen(nstr + beforelen);
			result[k] = (char *)malloc(sizeof(char) * (wl + 1));
			int j = 0;
			while(j < wl)
			{
				result[k][j] = nstr[beforelen + j];
				j++;
			}
			result[k][j] = '\0';
			beforelen += ft_wordlen(nstr + beforelen) + 1;
		k++;
		}
        return (result);
}

int main(void)
{
        char *str = "        Hello       Bonjour    ";
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
