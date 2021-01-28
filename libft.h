/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 14:02:04 by asydykna          #+#    #+#             */
/*   Updated: 2021/01/28 19:45:29 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <ctype.h>
#include <stdio.h>

//delete later
#include <string.h>
//# define NULL (void *)0
//# include <unistd.h>

int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
int ft_isalpha(int c);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memccpy(void *dst, const void *src, int c, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *b, int c, size_t len);
char *ft_strchr(const char *s, int c);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size);
int ft_strlen(const char *str);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strrchr(const char *s, int c);

#endif
