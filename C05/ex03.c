#include <stdio.h>

int ft_pow(int nb, int power)
{
	int ans = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return(1);
	else
		return(ft_pow(nb, power-1) * nb);
}
int main()
{
	printf("Hello\n");
	printf("%d", ft_pow(-2,3));
	return 0;
}
