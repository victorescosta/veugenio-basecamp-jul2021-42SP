int	ft_str_is_lowercase(char	*str);
int	ft_iss_lowercase(char	c);

int	ft_str_is_lowercase(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(ft_iss_lowercase(str[i])))
			return (0);
		i++;
	}
	return (1);
}

int	ft_iss_lowercase(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}
