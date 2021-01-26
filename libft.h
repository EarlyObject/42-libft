/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 14:02:04 by asydykna          #+#    #+#             */
/*   Updated: 2021/01/26 13:42:48 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
//# include <unistd.h>

void ft_bzero(void *s, size_t n);
void *ft_memccpy(void *dst, const void *src, int c, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *b, int c, size_t len);
unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size);
int ft_strlen(char *str);

#endif
