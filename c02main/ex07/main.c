#include<stdio.h>

char *ft_strupcase(char *str);

int main (void)
{
	char str[] = "hahahaha";
	char str2[] = "42";
	char str3[] = "OIIIIE";
	char str4[] = "l0l!";
	char str5[] = "";
	printf("%s\n", ft_strupcase(str));
	printf("%s\n", ft_strupcase(str2));
	printf("%s\n", ft_strupcase(str3));
	printf("%s\n", ft_strupcase(str4));
	printf("%s\n", ft_strupcase(str5));
	return(0);
}
