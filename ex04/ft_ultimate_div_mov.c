#include <stdio.h>

void	ft_ultimate_div_mov(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}

int	main(void)
{
	int	n0;
	int	n1;
	int	*a;
	int	*b;

	n0 = 5;
	n1 = 2;
	a = &n0;
	b = &n1;
	ft_ultimate_div_mov(a, b);
	printf("*a = %d, *b = %d\n", *a, *b);
}
