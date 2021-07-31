#include	<unistd.h>

void	ft_putchar(char	a);

void	ft_putimpress(int x, int y, int x_coluna, int y_linha);

void	rush(int x, int y)
{
	int	x_coluna;
	int	y_linha;

	y_linha = 1;
	if (x != 0 && y != 0)
	{
		while (y_linha <= y)
		{
			x_coluna = 1;
			while (x_coluna <= x)
			{
				ft_putimpress(x, y, x_coluna, y_linha);
				x_coluna++;
			}
			ft_putchar('\n');
			y_linha++;
		}
	}
}

void	ft_putimpress(int x, int y, int x_coluna, int y_linha)
{
	if (x_coluna == 1 && (y_linha == y || y_linha == 1))
	{
		ft_putchar('A');
	}
	else if (y_linha == y && x_coluna == x && (x_coluna != 1 || y_linha != 1))
	{
		ft_putchar('C');
	}
	else if ((x_coluna != x && x_coluna != 1) && (x_coluna == y || y_linha == 1))
	{
		ft_putchar('B');
	}
	else if ((x_coluna == x || x_coluna == 1) && (y_linha != y && y_linha != 1))
	{
		ft_putchar('B');
	}	
	else
	{
		ft_putchar(' ');
	}
}
