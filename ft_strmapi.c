/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 08:29:32 by asydykna          #+#    #+#             */
/*   Updated: 2021/02/05 12:06:35 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rvalue;
	int		i;

	if (f && s)
	{
		rvalue = ft_calloc(ft_strlen(s) + 1, sizeof(s));
		if (!rvalue)
			return (NULL);
		i = 0;
		while (*s)
		{
			*rvalue = f(i, (char)s);
			s++;
			i++;
		}
		return (rvalue);
	}
	return (NULL);
}
