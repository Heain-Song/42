#include <stdio.h>





int	ft_atoi_base(const char *str, int str_base)
{
	int i;
	int result;
	int minus_sign;

	i = 0;
	result = 0;
	minus_sign = 1;
	while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
		i++;
	if (str[0] == '+' || str[0] == '-')
	{
		if (str[0] == '-')
			minus_sign += -1;
		i++;
	}
	while(str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 59)
			result = (result * str_base) + (str[i] - 48);
		if ((str[i] >= 'a' && str[i] <= 'f') 
			|| (str[i] >= 'A' && str[i] <= 'F'))
		{
			// a = 10. b = 11, c = 12, d = 13, e = 14, f = 15
			
		}
		i++;
	}
	return(result * minus_sign);
}

/*
1. whatever base it is, convert it to base 10 integer.
2. the given char consists of "0123456789abcdef"
3. Regardless of upper, lower case, convert it to deximal int.
4. Minus sign is considered only when it's the first char of the str.
*/
