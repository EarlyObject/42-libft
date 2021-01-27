/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 12:38:00 by asydykna          #+#    #+#             */
/*   Updated: 2021/01/27 14:32:21 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t
     ft_strlcat(char * dst, const  char *src, size_t dstsize)
{
	size_t n;
	size_t total;

	n = dstsize;
	total = ft_strlen(dst) + ft_strlen((char *)src);
	while (dstsize-- != 0 && *dst != '\0')
		dst++;
	if (dstsize == 0)
		return (n + ft_strlen((char *)src));
	while (*src)
	{
		if (n != 1)
		{
			*dst++ = *src;
			n--;
		}
		src++;
	}
	*dst = '\0';
	return (total);
}
