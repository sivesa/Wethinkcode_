/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisandla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 15:19:17 by sisandla          #+#    #+#             */
/*   Updated: 2020/06/17 15:48:51 by sisandla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char *dig;
	int i;

	a = '0';
	//b = '0';
	//c = '0';
	dig = "123456789";
	while (a >= '0' && a <= '9')
	{
		b = '0';
		while (b >= '0' && b <= '9')
		{
			c = '0';
			while (c >=  '0' && c <= '9')
			{
				//ft_putchar(a);
				i = 0;
				while (dig[i])
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(' ');
					ft_putchar(c);
					ft_putchar(dig[i]);
					ft_putchar(',');
					ft_putchar(' ');
					i++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

int		main(void)
{
	ft_print_comb2();
	ft_putchar('\n');
	return (0);
}
