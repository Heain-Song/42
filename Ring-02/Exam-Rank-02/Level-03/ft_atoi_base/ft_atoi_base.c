#include <>

int ft_atoi_base(const char *str, int str_base)
{	
	// str(it could be base 2, 4, 6, 8, 10, 16??) into an integer base(10).

	int i;
	int sign;

	i = 0;
	sign = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			sign *= -1;
			i++;
		}
		if (str[i] >= '0' && str[i] <= '9')
		








	i++;
	}

}



/*Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);*/
