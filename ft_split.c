/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 09:10:17 by asydykna          #+#    #+#             */
/*   Updated: 2021/02/01 13:42:11 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	char *start;
	//char *p2;
	char *ptemp;
	size_t slen;
	size_t separator;
	char **temp;
	
	separator = 0;
	ptemp = ft_strtrim(s, &c);
	printf("\ntrimmed string is: %s, sizeof = %zu\n", ptemp, sizeof(ptemp));
	start = ptemp;
	while (*ptemp)
	{
		if (*ptemp == c)
			separator++;
		ptemp++;
	}
	printf("%zu separators detected\n", separator);
	size_t rows;
	rows = separator + 2;

	temp = ft_calloc((rows), sizeof(s));
	/* char* w1 = "first";
	char* w2 = "second";
	temp[0] = w1;
	temp[1] = w2; */
	int rowcount = 0;
	//printf("trimmed string is: %s, sizeof = %zu\n", ptemp, sizeof(ptemp));
	while (*start != '\0')
	{
		slen = 0;
		while (*(start + slen) != c)
		{
			printf("Start value %c", *(start + slen));
			slen++;
		}
		printf("length of string is %zu\n", slen);

		char *row = ft_calloc((slen + 1), sizeof(s));
		memcpy(row, start, slen);
		temp[rowcount] = row;
		rowcount++; 
		start = (start + slen);
		while (*start == c && *start != '\0')
		{
			start++;
		}
		
		printf("the row is %s\n", row);
		//printf("%s\n", start);
		break;

	/* 	char *row = ft_calloc((slen + 1), sizeof(s));
		ft_strlcpy(row, start, slen + 1);
		temp[rowcount] = row; */
		/* start += slen;
		 */
	}
	//temp[rows - 1] = NULL;
	return temp;
}