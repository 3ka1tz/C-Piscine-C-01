#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	n;
	int	*nbr;

	nbr = &n;
	ft_ft(nbr);
	printf("*nbr = %d\n", *nbr);
}
