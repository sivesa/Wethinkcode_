#include <stdio.h>
#include <unistd.h>

int		ft_iterative_factorial(int nb)
{
	int n;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 1)
	{
		n = nb - 1;
		while (n > 1)
		{
			nb *= n;
			n = n - 1;
		}
		return (nb);
	}
}

int main(void)
{
	int i;

	i = ft_iterative_factorial(8);
	printf("%d\n", i);
	return 0;
}

