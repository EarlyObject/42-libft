/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 08:27:58 by asydykna          #+#    #+#             */
/*   Updated: 2021/02/05 12:02:37 by asydykna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list
	*ft_lstnew(void *content)
{
	t_list	*p;

	if (!(p = (t_list*)ft_calloc(sizeof(*content), sizeof(content))))
		return (NULL);
	p->content = content;
	p->next = NULL;
	return (p);
}
