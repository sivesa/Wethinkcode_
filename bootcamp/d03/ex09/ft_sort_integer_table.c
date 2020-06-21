/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisandla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 14:37:08 by sisandla          #+#    #+#             */
/*   Updated: 2020/06/21 14:38:01 by sisandla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_integer_table(int *tab, int size)
{
	int imax;
	int i;

	if (tab)
	{
		while (--size >= 0)
		{
			i = -1;
			imax = -1;
			while (++i <= size)
				if (imax == -1 || tab[i] > tab[imax])
					imax = i;
			if (imax != size)
				ft_swap(tab + size, tab + imax);
		}
	}
}
