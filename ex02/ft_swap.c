#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(void)
{
	int	n0;
	int	n1;
	int	*a;
	int	*b;

	n0 = 0;
	n1 = 1;
	a = &n0;
	b = &n1;
	ft_swap(a, b);
	printf("*a = %d, *b = %d\n", *a, *b);
}
