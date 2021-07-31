int	ft_str_is_uppercase(char	*str);
int	ft_iss_uppercase(char	c);

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(ft_iss_uppercase(str[i])))
			return (0);
		i++;
	}
	return (1);
}

int	ft_iss_uppercase(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}
