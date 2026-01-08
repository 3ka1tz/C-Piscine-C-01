int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

/*
#include <stdio.h> // printf

int	main(void)
{
	char	*str;

	str = "Hello, World!";
	printf("ft_strlen(\"%s\") = %d;\n", str, ft_strlen(str));
}
*/
