/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 18:11:05 by asydykna          #+#    #+#             */
/*   Updated: 2021/02/07 17:17:39 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	int		i;

	if (!*haystack)
		return (NULL);
	if (*needle)
	{
		h = (char *)haystack;
		while (*h)
		{
			if (ft_strlen(needle) > len)
				return (NULL);
			i = 0;
			while (h[i] == needle[i])
			{
				if (needle[i + 1] == '\0')
					return (h);
				i++;
				len--;
			}
			h = i > 0 ? h + i : h + 1;
			len--;
		}
	}
	return ((char *)haystack);
}
