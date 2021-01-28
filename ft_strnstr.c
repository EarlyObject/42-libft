/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 18:11:05 by asydykna          #+#    #+#             */
/*   Updated: 2021/01/28 20:31:52 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *
ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *h;
	char *n;
	size_t nlen;
	int i;

	if (*needle != '\0')
	{
		h = (char *)haystack;
		n = (char *)needle;
		nlen = ft_strlen(needle);
		do
		{
			if (nlen > len)
				return (NULL);
			i = 0;
			while (h[i] == n[i])
			{
				if (n[i + 1] == '\0')
					return (h);
				i++;

				len--;
			}
			h = i > 0 ? h + i : h + 1;
			len--;
		} while (h);
	}
	return ((char *)haystack);
}

/* char *strnstr(const char *s, const char *find, size_t slen)
	{
		char c, sc;
		size_t len;

		if ((c = *find++) != '\0')
		{
			len = strlen(find);
			do
			{
				do
				{
					if (slen-- < 1 || (sc = *s++) == '\0')
						return (NULL);
				} while (sc != c);
				if (len > slen)
					return (NULL);
			} while (strncmp(s, find, len) != 0);
			s--;
		}
		return ((char *)s);
	} */