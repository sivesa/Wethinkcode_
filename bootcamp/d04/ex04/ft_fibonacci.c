#include <stdio.h>

int		ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int 	main(void)
{
	int i = ft_fibonacci2(6);
	printf("%d\n", i);
	return (0);
}