#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int c;
	int d;
	int *a;
	int *b;

	c = 1;
	d = 2;
	a = &c;
	b = &d;

	printf("c = %d d = %d\n", c, d);
	ft_swap(a, b);
	printf("c = %d d = %d\n", c, d);

	return(0);
}