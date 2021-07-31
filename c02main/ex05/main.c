#include<stdio.h>

int ft_str_is_uppercase(char	*str);

int main(void)
{
	char str [] = "abcdef";
	char str2 [] = "42";
	char str3 [] = "ABC";
	char str4 [] = "aBc!";
	char str5 [] = "";

	printf("%d\n", ft_str_is_uppercase(str));
	printf("%d\n", ft_str_is_uppercase(str2));
	printf("%d\n", ft_str_is_uppercase(str3));
	printf("%d\n", ft_str_is_uppercase(str4));
	printf("%d\n", ft_str_is_uppercase(str5));
	return(0);
}