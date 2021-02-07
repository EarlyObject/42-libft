/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 18:39:47 by asydykna          #+#    #+#             */
/*   Updated: 2021/02/05 20:11:38 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	total;
	char	*p;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	total = len1 + len2 + 1;
	p = (char *)malloc(total * sizeof(char));
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1, total);
	ft_strlcat(p, s2, total);
	return (p);
}
