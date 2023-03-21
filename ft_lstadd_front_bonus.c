/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earriaga <earriaga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:25:17 by earriaga          #+#    #+#             */
/*   Updated: 2023/03/15 12:38:10 by earriaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// lst: la dirección de un puntero al primer nodo de
// una lista.
// new: un puntero al nodo que añadir al principio de
// la lista.

// Añade el nodo ’new’ al principio de la lista ’lst’.
// No devuelve nada

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		new -> next = *lst;
		*lst = new;
	}
}
