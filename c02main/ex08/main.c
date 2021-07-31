#include<stdio.h>

char *ft_strlowcase(char *str);

int main (void)
{
	char str[] = "HAHAHAHA";
	char str2[] = "42";
	char str3[] = "OIIIIE";
	char str4[] = "Ll0lL!";
	char str5[] = "";
	printf("%s\n", ft_strlowcase(str));
	printf("%s\n", ft_strlowcase(str2));
	printf("%s\n", ft_strlowcase(str3));
	printf("%s\n", ft_strlowcase(str4));
	printf("%s\n", ft_strlowcase(str5));
	return(0);
}