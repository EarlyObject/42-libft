/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:03:57 by asydykna          #+#    #+#             */
/*   Updated: 2021/01/25 14:31:29 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void
	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *a;
	char *b;

	a = (char*)src;
	b = (char*)dst;
	if (a < b)
	{
		while (len > 0)
		{
			a[len] = b[len];
			len--;
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
