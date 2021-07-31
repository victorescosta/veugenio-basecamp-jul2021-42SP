#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main(void)
{
	int a;
	int *pointa1;
	int **pointa2;
	int ***pointa3;
	int ****pointa4;
	int *****pointa5;
	int ******pointa6;
	int *******pointa7;
	int ********pointa8;
	int *********pointa9;

	a = 30;

	pointa1 = &a;
	pointa2 = &pointa1;
	pointa3 = &pointa2;
	pointa4 = &pointa3;
	pointa5 = &pointa4;
	pointa6 = &pointa5;
	pointa7 = &pointa6;
	pointa8 = &pointa7;
	pointa9 = &pointa8;

	printf("%d\n", a);
	ft_ultimate_ft(pointa9);
	printf("%d\n", a);

	return(0);
}