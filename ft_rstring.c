/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rstring.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 19:05:54 by asydykna          #+#    #+#             */
/*   Updated: 2021/02/03 19:09:43 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*ft_rstring(char *str)
{
	char	*rstr;
	size_t	len;
	size_t	i;

	len = ft_strlen(str);
	rstr = ft_calloc(len + 1, sizeof(char));
	i = 0;
	while (i < len)
	{
		rstr[i] = str[len - i - 1];
		i++;
	}
	return (rstr);
}
