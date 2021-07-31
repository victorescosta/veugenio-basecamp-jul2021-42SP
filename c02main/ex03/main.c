#include <stdio.h>

int	ft_str_is_numeric(char	*str);
int	ft_iss_num(char	c);

int	main(void)
{
	char str [] = "abcdef";
	char str2 [] = "42";
	char str3 [] = "abc123def";
	char str4 [] = "abc!";
	char str5 [] = "";

	printf("%d\n", ft_str_is_numeric(str));
	printf("%d\n", ft_str_is_numeric(str2));
	printf("%d\n", ft_str_is_numeric(str3));
	printf("%d\n", ft_str_is_numeric(str4));
	printf("%d\n", ft_str_is_numeric(str5));
	return(0);
}
