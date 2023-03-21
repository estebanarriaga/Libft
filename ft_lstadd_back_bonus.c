/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earriaga <earriaga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:33:05 by earriaga          #+#    #+#             */
/*   Updated: 2023/03/15 12:38:18 by earriaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// lst: el puntero al primer nodo de una lista
// new: el puntero a añadir a una lista

// Añade el nodo 'new' al final de la lista 'lst'

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*add;

	if (lst)
	{
		if (*lst)
		{
			add = ft_lstlast(*lst);
			add -> next = new;
		}
		else
			*lst = new;
	}
}
