#include <stdio.h>

int		ft_sqrt(int nb)
{
	int res;
	int i;

	i = 2;
	res = 0;
	if (nb < 0 || nb == 0)
		return (0);
	else
	{
		while (nb != res)
		{
			res = i * i;
			i++;
		}
		i -= 1;
	}
	return (i);
}

int main(void)
{
	int i;

	i = ft_sqrt(25);
	printf("%d\n", i);
	return (0);
}