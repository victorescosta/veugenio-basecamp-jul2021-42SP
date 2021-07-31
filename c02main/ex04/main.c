#include <stdio.h>

int ft_str_is_lowercase(char *str);

int	main (void)
{
	char str [] = "abcdef";
	char str2 [] = "42";
	char str3 [] = "abc123def";
	char str4 [] = "abc!";
	char str5 [] = "";

	printf("%d\n", ft_str_is_lowercase(str));
	printf("%d\n", ft_str_is_lowercase(str2));
	printf("%d\n", ft_str_is_lowercase(str3));
	printf("%d\n", ft_str_is_lowercase(str4));
	printf("%d\n", ft_str_is_lowercase(str5));
	return(0);
}