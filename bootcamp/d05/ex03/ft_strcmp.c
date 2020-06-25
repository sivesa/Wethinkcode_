/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisandla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 16:46:45 by sisandla          #+#    #+#             */
/*   Updated: 2020/06/25 16:46:49 by sisandla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int				index;
	unsigned char	*s1c;
	unsigned char	*s2c;

	index = 0;
	s1c = (unsigned char *)s1;
	s2c = (unsigned char *)s2;
	while (s1c[index] && s2c[index] && s1c[index] == s2c[index])
		index++;
	return (s1c[index] - s2c[index]);
}
