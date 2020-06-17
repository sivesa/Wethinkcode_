/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisandla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 14:29:09 by sisandla          #+#    #+#             */
/*   Updated: 2020/06/17 14:34:07 by sisandla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

int		main(void)
{
	ft_is_negative(-42);
	ft_putchar('\n');
	return (0);
}
