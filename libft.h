/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 14:02:04 by asydykna          #+#    #+#             */
/*   Updated: 2021/01/22 14:02:48 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT.H
#define LIBFT.H

# include <stdlib.h>
//# include <unistd.h>

void ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
int	ft_strlen(char *str);


#endif
