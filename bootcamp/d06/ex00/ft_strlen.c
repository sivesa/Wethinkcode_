/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft+strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisandla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 15:07:30 by sisandla          #+#    #+#             */
/*   Updated: 2020/06/26 15:07:34 by sisandla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		++count;
		++str;
	}
	return (count);
}
