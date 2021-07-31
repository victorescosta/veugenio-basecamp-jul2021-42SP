#include <stdio.h>

void	ft_ft(int	*nbr);

int	main(void)
{
	int	p;
	int	*pointp;

	p = 30;
	pointp = &p;

	printf("%d\n", p);
	ft_ft(pointp);
	printf("%d\n", p);
	return(0);
}