#include<unistd.h>

void	ft_putstr(char *str);
void	ft_putchar(char	c);

void	ft_putstr(char	*str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}
