int	ft_atoi(const char *str)
{
	int i;
	int result;
	int minus_sign;

	i = 0;
	result = 0;
	minus_sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus_sign *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 59)
		{
			result = result * 10 + (str[i] - 48);
		}
		i++;
	}
	return (result * minus_sign);
}
