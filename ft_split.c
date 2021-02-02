/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 09:10:17 by asydykna          #+#    #+#             */
/*   Updated: 2021/02/02 18:37:23 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	fillrows(size_t i, char **temp, char **final)
{
	size_t	j;

	j = ft_strlen(final[i]);
	temp[i] = (char *)ft_calloc((j + 1), sizeof(char));
	ft_memcpy(temp[i], final[i], j + 1);
}

void	filllastrow(size_t rows, size_t columns, char **temp, const char *s)
{
	temp[rows - 1] = (char*)ft_calloc((columns + 1), sizeof(char));
	ft_memcpy(temp[rows - 1], s - columns, columns);
	temp[rows] = NULL;
}

void	backup(size_t rows, size_t columns, char **temp, char **final)
{
	ft_memcpy(final, temp, (rows + 1) * (columns + rows));
	free(temp);
}

char
	**ft_split(char const *s, char c)
{
	char	**temp;
	char	**final;
	size_t	rows;
	size_t	columns;
	size_t	i;

	rows = 0;
	final = NULL;
	while (*s)
	{
		columns = 0;
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		while (*s && *s != c)
		{
			columns++;
			s++;
		}
		rows++;
		temp = (char**)ft_calloc((rows + 1), sizeof(s));
		i = -1;
		while (++i < (rows - 1))
			fillrows(i, temp, final);
		filllastrow(rows, columns, temp, s);
		final = (char**)ft_calloc((rows + 1) * (columns + rows), sizeof(s));
		backup(rows, columns, temp, final);
	}
	return (final);
}
