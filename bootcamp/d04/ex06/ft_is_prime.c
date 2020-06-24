#include <stdio.h>

int		ft_is_prime(int nb)
{
	//int prime;

	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else if (	nb == 2 || nb == 3 || ((nb % 2 == 1) && (nb % 3 >= 1))		)
		return (nb);
	return (0);
}

int		main(void)
{
	int i;

	i = ft_is_prime(17);
	//if zero returned therefore it's not prime
	if (i == 0)
		printf("Value is not prime\n");
	else
		printf("%d is prime\n", i);
	return (0);
}
