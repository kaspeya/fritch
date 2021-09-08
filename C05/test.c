#include <stdio.h>

int ft_factorial(int nb)
{
	int i = 1;
	int ans = 1;
	while (i<=nb)
	{
		ans = i * ans;
		i++;
	}
	return ans;
}


int main()
{
	printf("Hello\n");
	printf("%d", ft_factorial(4));
	return 0;
}

