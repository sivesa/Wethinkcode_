/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisandla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 16:45:12 by sisandla          #+#    #+#             */
/*   Updated: 2020/06/25 16:45:14 by sisandla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	index;
	size_t	length;

	index = -1;
	length = ft_strlen(src);
	while (++index < n)
	{
		if (index > length)
			dst[index] = '\0';
		else
			dst[index] = src[index];
	}
	return (dst);
}
