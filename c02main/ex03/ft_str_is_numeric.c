int	ft_str_is_numeric(char	*str);
int	ft_iss_num(char	c);

int	ft_str_is_numeric(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(ft_iss_num(str[i])))
			return (0);
		i++;
	}
	return (1);
}

int	ft_iss_num(char	c)
{
	return ((c >= '0') && (c <= '9'));
}
