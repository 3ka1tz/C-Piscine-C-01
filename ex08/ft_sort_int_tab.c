void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			++i;
	}
}

/*
#include <stdio.h> // printf

int	main(void)
{
	int	tab[5];
	int	size;
	int	i;

	tab[0] = 4;
	tab[1] = 3;
	tab[2] = 2;
	tab[3] = 1;
	tab[4] = 0;
	size = 5;
	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		++i;
	}
}
*/
