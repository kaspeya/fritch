#include <stdio.h>

int ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i < nb/2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	printf("Hello\n");
	printf("%d\n", ft_is_prime(13));
	return 0;
}
