#include <stdio.h>

int ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i*i <= nb)
	{
		if (nb == i * i)
			return (i);
		i++;
	}
	return (0);
}

int main()
{
	printf("Hello\n");
	printf("%d\n", ft_sqrt(26));
	return 0;
}
