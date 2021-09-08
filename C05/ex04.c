#include <stdio.h>
int fib_rec(int index, int prev, int prev_prev, int num)
{
	if (num == index)
		return (prev + prev_prev);
	else
		return (fib_rec(index, prev + prev_prev, prev, num + 1));
}

int ft_fibonachi(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (fib_rec(index, 1, 0, 2));
}

int main(int argc, char **argv)
{
	printf("Hello\n");
	printf("%d\n", ft_fibonachi(89));
	printf("%d\n", argc);
	printf("%s", argv[3]);

	return 0;
}
