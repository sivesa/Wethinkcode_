/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisandla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 14:04:26 by sisandla          #+#    #+#             */
/*   Updated: 2020/06/17 14:17:48 by sisandla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet1(void)
{
	write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}

void	ft_print_reverse_alphabet(void)
{
	int i;

	i = 122;
	while (i >= 97 && i <= 122)
		ft_putchar(i--);
}

int		main(void)
{
	ft_print_reverse_alphabet();
	ft_putchar('\n');
	return (0);
}
