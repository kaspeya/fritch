#include <stdio.h>

int ft_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 1)
		return (nb * ft_factorial(nb - 1));
	else
		return (1);
}


int main()
{
	printf("Hello\n");
	printf("%d", ft_factorial(8));
	return 0;
}
