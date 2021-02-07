/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 09:10:17 by asydykna          #+#    #+#             */
/*   Updated: 2021/02/07 01:36:32 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
	countrows(char *s, char c)
{
	int	rows;

	rows = 0;
	while (s && *s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		while (*s && *s != c)
			s++;
		rows++;
	}
	return (rows);
}

int
	checkstr(char *s, char c)
{
	int	chrs;

	chrs = 0;
	while (*s && *s != c)
	{
		chrs++;
		s++;
	}
	return (chrs);
}

char
	**ft_split(char const *s, char c)
{
	char	**temp;
	int		rows;
	int		chrs;
	int		i;

	i = 0;
	rows = countrows((char*)s, c);
	if (!s || !c || !(temp = ft_calloc(rows + 1, sizeof(char *))))
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		chrs = checkstr((char *)s, c);
		if (!(temp[i] = ft_calloc(chrs + 1, sizeof(char))))
			return (NULL);
		ft_strlcpy(temp[i], s, chrs + 1);
		i++;
		s += chrs;
	}
	temp[i] = NULL;
	return (temp);
}
