int	ft_str_is_printable(char	*str);
int	ft_iss_printable(char	c);

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(ft_iss_printable(str[i])))
			return (0);
		i++;
	}
	return (1);
}

int	ft_iss_printable(char	c)
{
	return ((c >= 32) && (c <= 126));
}
