/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earriaga <earriaga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:20:05 by earriaga          #+#    #+#             */
/*   Updated: 2023/03/15 12:39:42 by earriaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// lst: El principio de la lista
// Devuelve el último nodo de la lista

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst -> next)
			return (lst);
		lst = lst -> next;
	}
	return (lst);
}
