/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 10:01:15 by asydykna          #+#    #+#             */
/*   Updated: 2021/02/03 13:04:54 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int int_len(int n)
{
	int length;

	if(n == 0)
		return (1);
	length = 0;
	
  while(n)
	{ 
		length++; 
		n /= 10;
	}
  return (length);
}

char *ft_itoa(int n)
{
	char *str;
	int len;
	int flag;
	char c;
	int i;

	len = int_len(n);
	str = n > 0 ? ft_calloc(n + 1, sizeof(int)) : ft_calloc(n + 2, sizeof(int));
	if(n < 0)
		flag = 0;
	else
		flag = 1;
	
	printf("n is %d, len is %d\n", n, len);
	while (n)
	{
		i = 0;
		c = '\0' + n/10 + 48;
		printf("%c", c);

		*(str + i) = c;
		i++;
		n /= 10;
	}
	
	return (str);
}


//https://www.javatpoint.com/itoa-function-in-c
//https://faq.cprogramming.com/cgi-bin/smartfaq.cgi?id=1043284385&answer=1043808026
//https://www.techiedelight.com/implement-itoa-function-in-c/
//https://stackoverflow.com/questions/3068397/finding-the-length-of-an-integer-in-c