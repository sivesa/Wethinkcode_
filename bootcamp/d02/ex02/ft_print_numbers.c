/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisandla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 14:23:20 by sisandla          #+#    #+#             */
/*   Updated: 2020/06/17 14:28:36 by sisandla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers(void)
{
	int i;

	i = 48;
	while (i >= 48 && i <= 57)
		ft_putchar(i++);
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
