/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:11:35 by asydykna          #+#    #+#             */
/*   Updated: 2021/12/21 11:05:34 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** SYNOPSIS: extract tokens from strings
**
** DESCRIPTION:
** 	The ft_strtok() function breaks a string into a sequence of zero or
** more nonempty tokens.  On the first call to strtok(), the string
** to be parsed should be specified in str.  In each subsequent call
**
** The function modifies its first argument.
** The function cannot be used on constant strings.
** The identity of the delimiting byte is lost.
** see https://man7.org/linux/man-pages/man3/strtok.3.html
*/

#include "libft.h"

char *
	search_str_for_token(const char *str, const char *delim)
{
	const char	*delim_copy;

	while (*str != '\0')
	{
		delim_copy = delim;
		while (*delim_copy != '\0')
			if (*delim_copy++ == *str)
				return ((char *) str);
		++str;
	}
	return (NULL);
}

size_t
	get_prefix_len(const char *str, const char *delim)
{
	const char	*p;
	const char	*delim_copy;
	size_t		len;

	len = 0;
	p = str;
	while (*p != '\0')
	{
		delim_copy = delim;
		while (*delim_copy != '\0')
		{
			if (*p == *delim_copy)
				break ;
			if (*delim_copy == '\0')
				return (len);
			else
				++len;
			++delim_copy;
		}
		++p;
	}
	return (len);
}

char
	*ft_strtok(char *str, const char *delim)
{
	static char	*old_str;
	char		*token;

	if (str == NULL)
		str = old_str;
	str += get_prefix_len(str, delim);
	if (*str == '\0')
	{
		old_str = str;
		return (NULL);
	}
	token = str;
	str = search_str_for_token(token, delim);
	if (str == NULL)
		old_str = ft_memchr(token, '\0', INT_MAX);
	else
	{
		*str = '\0';
		old_str = str + 1;
	}
	return (token);
}
