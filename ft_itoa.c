/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 10:01:15 by asydykna          #+#    #+#             */
/*   Updated: 2021/02/06 16:27:13 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		flag;

	len = ft_intlen(n);
	if (!(str = ft_calloc(len + (n < 0 ? 2 : 1), sizeof(int))))
		return (NULL);
	flag = n < 0 ? 0 : 1;
	if (n == 0)
		*str++ = '0';
	else if (n == -2147483648)
	{
		*str++ = '8';
		n /= 10;
	}
	if (n < 0)
		n *= -1;
	while (n)
	{
		*str++ = (n % 10) + 48;
		n /= 10;
	}
	if (flag == 0)
		*str = '-';
	return (ft_rstring(str - len));
}
