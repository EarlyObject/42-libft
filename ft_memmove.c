/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:03:57 by asydykna          #+#    #+#             */
/*   Updated: 2021/01/29 13:07:14 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*
	ft_memmove(void *dst, const void *src, size_t len)
{
	char *a;
	char *b;

	a = (char *)src;
	b = (char *)dst;
	if (a < b)
	{
		while (len--)
		{
			b[len] = a[len];
		}
	}
	else
	{
		ft_memcpy(b, a, len);
	}
	return (dst);
}

/* void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *a;
	char *b;

	a = (char *)src;
	b = (char *)dst;
	if (a < b)
		while (len--)
		{
			b[len] = a[len];
		}
	else
		ft_memcpy(b, a, len);
	return (dst);
} */