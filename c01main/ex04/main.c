#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b);


int	main(void)
{
	int		c;	
	int		d;
	int		*a;
	int		*b;

	c = 21;
	d = 2;
	a = &c;
	b = &d;
	ft_ultimate_div_mod(a, b);
	printf("%d\n", *a);
	printf("%d\n", *b);
	return(0);
}
