#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int res;

	res = nb;
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else if (power > 1)
	{
		while (power-- != 1)
			res = res * nb;
	}
	
	return (res);
}

int		main(void)
{
	int i;
	i = ft_iterative_power(-2, 4);
	printf("%d\n", i);
	return (0);
}