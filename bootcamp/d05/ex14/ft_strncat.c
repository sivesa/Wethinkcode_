/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisandla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 13:52:40 by sisandla          #+#    #+#             */
/*   Updated: 2020/06/26 13:52:44 by sisandla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *s1, char *s2, size_t n)
{
	size_t		s1_index;
	size_t		s2_index;

	s1_index = ft_strlen(s1);
	s2_index = -1;
	while (s2[++s2_index] && s2_index < n)
	{
		s1[s1_index] = s2[s2_index];
		s1_index++;
	}
	s1[s1_index] = '\0';
	return (s1);
}
