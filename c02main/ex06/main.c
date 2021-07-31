#include <stdio.h>

int	ft_str_is_printable(char *str);

int main (void)
{
	char	str[] = "oxe ta doido";
	char	str2[] = "42";
	char	str3[] = "basafl\1l";
	char	str4[] = "2510";
	char	str5[] = "";

	printf("%d\n", ft_str_is_printable(str));
	printf("%d\n", ft_str_is_printable(str2));
	printf("%d\n", ft_str_is_printable(str3));
	printf("%d\n", ft_str_is_printable(str4));
	printf("%d\n", ft_str_is_printable(str5));
	return(0);
}