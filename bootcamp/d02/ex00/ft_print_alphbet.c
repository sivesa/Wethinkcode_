/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphbet.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisandla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 11:18:24 by sisandla          #+#    #+#             */
/*   Updated: 2020/06/17 14:03:16 by sisandla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int i;

	i = 97;
	while(i >= 97 && i <= 122)
	{
		ft_putchar(i);
		i++;
	}
}

int		main(void)
{
	ft_print_alphabet();
	ft_putchar('\n');
	return 0;
}
