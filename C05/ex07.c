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

int ft_find_next_prime(int nb)
{
	int i;

	i = 0;
	while (1 > 0)
	{
		if (ft_is_prime(nb + i) == 1)
			return (nb + i);
		i++;

	}
}

int main()
{
	printf("Hello\n");
	printf("%d\n", ft_find_next_prime(11));
	return 0;
}
