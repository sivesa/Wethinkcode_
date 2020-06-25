/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisandla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 16:47:31 by sisandla          #+#    #+#             */
/*   Updated: 2020/06/25 16:47:33 by sisandla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			index;
	unsigned char	*s1c;
	unsigned char	*s2c;

	index = 0;
	s1c = (unsigned char *)s1;
	s2c = (unsigned char *)s2;
	if (!n)
		return (0);
	while (s1c[index] == s2c[index] && s1c[index]
					&& s2c[index] && (index < (n - 1)))
		index++;
	return (s1c[index] - s2c[index]);
}
