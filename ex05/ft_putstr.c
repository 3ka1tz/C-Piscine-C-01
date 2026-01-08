#include <unistd.h> // write

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

/*
int	main(void)
{
	ft_putstr("Hello, World!\n");
}
*/
