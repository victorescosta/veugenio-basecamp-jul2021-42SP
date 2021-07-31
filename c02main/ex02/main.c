#include<stdio.h>

int ft_str_is_alpha(char	*str);

int	main()
{
	char str [] = "abcdef";
	char str2 [] = "42";
	char str3 [] = "abc123def";
	char str4 [] = "abc!";
	char str5 [] = "";

	printf("%d\n", ft_str_is_alpha(str));
	printf("%d\n", ft_str_is_alpha(str2));
	printf("%d\n", ft_str_is_alpha(str3));
	printf("%d\n", ft_str_is_alpha(str4));
	printf("%d\n", ft_str_is_alpha(str5));

	return(0);
}