#include <stdio.h>
#include <unistd.h>
char	*ft_strcpy(char	*dest,char	*src);

int main(void)
{
	char	src[] = "Nao aguento mais";
	char	dest[8];
	printf("%s\n", src);
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}
