#include <stdio.h>

void	ft_div_mod(int	a, int	b, int	*div, int	*mod);

int	main(void)
{
	int a;
	int b;
	int *div;
	int *mod;

	a = 21;
	b = 2;
	div	= &a;
	mod = &b;

	printf("adress a %p\n", div);
	printf("dividend a %d\n", *div);
	printf("adress b %p\n", mod);
	printf("divider b %d\n", *mod);

	ft_div_mod(a, b, div, mod);

	printf("adress div %p\n", div);
	printf("quotient div %d\n", *div);
	printf("adress mod %p\n", mod);
	printf("remainder mod %d\n", *mod);
}