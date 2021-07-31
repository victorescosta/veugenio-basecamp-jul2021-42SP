int	ft_str_is_alpha(char	*str);
int	ft_iss_alpha(char	c);

int	ft_str_is_alpha(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(ft_iss_alpha(str[i])))
			return (0);
		i++;
	}
	return (1);
}

int	ft_iss_alpha(char	c)
{
	return (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')));
}
