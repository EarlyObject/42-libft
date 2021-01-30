/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 16:59:58 by asydykna          #+#    #+#             */
/*   Updated: 2021/01/30 17:42:02 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *
ft_strdup(const char *s1)
{
	size_t len;
	char *p;

	len = ft_strlen(s1) + 1;
	p = (char *)malloc(len * sizeof(s1));
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1, len);
	return (p);
}
