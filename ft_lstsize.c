/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 09:18:22 by asydykna          #+#    #+#             */
/*   Updated: 2021/02/05 12:03:17 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
	ft_lstsize(t_list *lst)
{
	size_t	size;

	size = 0;
	while (lst->next != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
