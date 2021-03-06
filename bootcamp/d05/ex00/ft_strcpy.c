/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisandla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 16:44:21 by sisandla          #+#    #+#             */
/*   Updated: 2020/06/26 13:15:22 by sisandla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	int		index;

	index = -1;
	while (src[++index])
		dst[index] = src[index];
	dst[index] = '\0';
	return (dst);
}
