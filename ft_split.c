/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 09:10:17 by asydykna          #+#    #+#             */
/*   Updated: 2021/02/01 23:05:39 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	char **temp;
	char **final;
	size_t rows;
	size_t columns;
	size_t i;
	size_t j;

	temp = NULL;
	final = NULL;
	rows = 0;
	while (*s)
	{
		columns = 0;
		while (*s == c)
			s++;
		if (*s == '\0')
			break;
		while (*s && *s != c)
		{
			columns++;
			s++;
		}
		rows++;
		temp = ft_calloc(rows + 1, sizeof(s));
		i = 0;
		while (i < rows - 1)
		{
			j = ft_strlen(&final[i][0]);
			temp[i] = ft_calloc(j + 1, sizeof(s));
			memcpy(&temp[i][0], &final[i][0], j);
			i++;
		}
		temp[rows - 1] = ft_calloc(columns + 1, sizeof(s));
		memcpy(&temp[rows - 1][0], s - columns, columns);

		final = temp;
		free(temp);
		if (*s == '\0')
			break;
	}
	return final;
}

/* while (*s)
	{
		columns = 0;
		while (*s == c)
			s++;
		while (*s && *s != c)
		{
			columns++;
			s++;
		}
		rows++;
		temp = ft_calloc(rows + 1, sizeof(s));
		i = 0;
		while (i < rows - 1)
		{
			j = ft_strlen(&final[i][0]);
			temp[i] = ft_calloc(j + 1, sizeof(s));
			memcpy(&temp[i][0], &final[i][0], j);
			i++;
		}
		temp[rows - 1] = ft_calloc(columns + 1, sizeof(s));
		memcpy(&temp[rows - 1][0], s - columns, columns);
		s++;
		final = temp;
		free(temp);
	} */