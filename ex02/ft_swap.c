void	ft_swap(int *a, int *b)
{
	int	swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

/*
#include <stdio.h> // printf

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
*/
