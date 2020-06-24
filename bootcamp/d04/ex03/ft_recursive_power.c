#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else if (power > 1)
		return (nb * ft_recursive_power(nb , power - 1));
	else
		return (0);
}

int main(void)
{
	int i;
	i = ft_recursive_power(3, 2);
	printf("%d\n", i);
	return 0;
}