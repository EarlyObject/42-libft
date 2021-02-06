/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 09:10:17 by asydykna          #+#    #+#             */
/*   Updated: 2021/02/07 00:23:30 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//delete later
#include "stdio.h"

int
	fillrows(size_t i, char **temp, char **final)
{
	size_t	j;

	j = ft_strlen(final[i]);
	if (!(temp[i] = (char *)ft_calloc((j + 1), sizeof(char))))
		return -1 ;
	ft_strlcpy(temp[i], final[i], (j + 1));
	return 1;
}

int
	filllastrow(size_t rows, size_t columns, char **temp, const char *s)
{
	if (!(temp[rows - 1] = (char*)ft_calloc((columns + 1), sizeof(char))))
		return -1;
	ft_strlcpy(temp[rows - 1], s - columns, columns + 1);
	temp[rows] = NULL;
	return 1;
}

const char
	*checkstr(char const *s, char c)
{
	while (*s == c)
		s++;
	return (s);
}

char
	**buildtemp(char **temp, char **final, size_t rows)
{
	size_t	i;

	if (!(temp = (char**)ft_calloc((rows + 1), sizeof(char))))
		return (NULL);
	i = 0;
	while (i < (rows - 1))
	{
		if (fillrows(i, temp, final) < 0)
			return NULL;
		i++;
	}
	return (temp);
}

char
	**ft_split(char const *s, char c)
{
	char	**temp;
	char	**final;
	size_t	rows;
	size_t	columns;
	size_t	columnstotal;
	columnstotal = 0;
	
	rows = 0;
	final = NULL;
	while (*s)
	{
		s = checkstr(s, c);
		if (!*s)
			break ;
		columns = 0;
		--s;
		while (s++ && *s && *s != c){
			columns++;
		columnstotal++;
		}
		rows++;
		if (!(temp = buildtemp(temp, final, rows)))
			return NULL;
		if (filllastrow(rows, columns, temp, s) < 0)
			return NULL;
		if(!(final = (char **)malloc((rows+1) * sizeof(char*) + (columnstotal) * sizeof(char))))
			return (NULL);
		ft_memcpy(final, temp, ((rows + 1) * sizeof(char *) + (columnstotal) * sizeof(char)));
		free(temp);
		
	}
	return (final);
}
