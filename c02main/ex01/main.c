#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char src[] = "Queria estar vivo";
	char dest[17];
	unsigned int n = 6;

	printf("%s\n", src);
	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
	return(0);
}