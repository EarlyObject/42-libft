/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 16:24:04 by asydykna          #+#    #+#             */
/*   Updated: 2021/02/05 19:14:41 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
	/* void	*ptr;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	bzero() 
	if (!(ptr = malloc(size * count)))
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr); */
}
