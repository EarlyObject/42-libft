/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 09:10:17 by asydykna          #+#    #+#             */
/*   Updated: 2021/02/02 15:42:39 by asydykna         ###   ########.fr       */
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
	size_t totalcolumns;
	//	char **backup;
	temp = NULL;
	final = NULL;
	rows = 0;
	totalcolumns = 0;
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
		totalcolumns += columns;
		printf("rows: %zu\n", rows);
		printf("columns: %zu\n", columns);
		temp = (char**)malloc((rows + 1) * sizeof(s));

		i = 0;
		while (i < (rows - 1))
		{
			j = ft_strlen(final[i]);
			printf("j = %zu\n", j);
			if (rows > 1)
			{
				for (size_t i = 0; i < rows; i++)
					printf("\nbefore malloc: final %zu is %s", i, final[i]);
		}
		
		//problem here!
		temp[i] = (char *)malloc((j + 1) * sizeof(s));

		printf("\nafter malloc: final %zu is %s\n", i, final[i]);
		memmove(temp[i], final[i], j + 1);
		temp[i][columns + 1] = '\0';
		printf("normal line: %s\n", temp[i]);
		i++;
		}
		temp[rows - 1] = (char*)malloc((columns + 1) * sizeof(s));
		memcpy(temp[rows - 1], s - columns, columns+1);
		temp[rows - 1][columns] = '\0';
		printf("final line: %s\n", temp[rows - 1]);

		temp[rows] = NULL;
		int len = (rows + 1) * (columns + rows);
		final = (char **)malloc(len *sizeof(s));
		memcpy(final, temp, len);
		
		for (size_t i = 0; i < rows; i++)
		{
			printf("after while: i = %zu, %s\n", i, final[i]);
		}

		/* char **arr2d2 = final;
    	int itr = 0;
		printf("Content of final:\n");
		while (arr2d2[itr] != NULL)
		{
        printf("%s\n", arr2d2[itr]);
        itr++;
    	}
		printf("End of content\n"); */

		
		free(temp);
		if (*s == '\0')
			break;
	}
	printf("\n\n");
	return final;
}
