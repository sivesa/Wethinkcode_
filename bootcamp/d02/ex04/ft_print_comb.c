/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisandla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 14:34:55 by sisandla          #+#    #+#             */
/*   Updated: 2020/06/19 16:23:03 by sisandla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	int x;
	int y;
	int z;
	
	x = 48;
	while (x >= 48 && x <= 57)
	{
		y = x + 1;
		while (y >= 48 && y <= 57)
		{
			z = y + 1;
			while (z >= 48 && z <= 57)
			{
				ft_putchar(x);
				ft_putchar(y);
				ft_putchar(z);
				if (x == '7' && y == '8' && z == '9')
					return;
				ft_putchar(',');
				ft_putchar(' ');
				z++;
			}
			y++;
		}
		x++;
	}
}
