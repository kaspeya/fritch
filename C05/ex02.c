#include <stdio.h>

int ft_pow(int nb, int power)
{
	int i = 0;
	int ans = 1;
	if (power < 0)
		return (0);
	while (i < power)
	{
		ans = ans * nb;
		i++;
	}
	return (ans);
}
int main()
{
	printf("Hello\n");
	printf("%d", ft_pow(2,3));
	return 0;
}
