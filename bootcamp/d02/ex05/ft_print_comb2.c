/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisandla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 15:19:17 by sisandla          #+#    #+#             */
/*   Updated: 2020/06/19 16:28:55 by sisandla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_output(char a, char b, char c, int i)
{
	char *digits;

	digits = "123456789";
	while (digits[i])
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(digits[i]);
		ft_putchar(',');
		ft_putchar(' ');
		i++;	
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	int i;

	a = '0';
	while (a >= '0' && a <= '9')
	{
		b = '0';
		i = 0;
		while (b >= '0' && b <= '9')
		{
			c = '0';
			while (c >=  '0' && c <= '9')
			{
				ft_print_output(a, b, c, i);
				if (c == '9')
					i++;
				c++;
			}
			b++;
		}
		a++;
	}
}
