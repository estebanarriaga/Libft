/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earriaga <earriaga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:58:44 by earriaga          #+#    #+#             */
/*   Updated: 2023/03/15 12:39:32 by earriaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// lst: el principio de la lista
// Devuelve: La longitud de la lista

// Cuenta el número de nodos en la lista

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		lst_size;
	t_list	*node;

	if (!lst)
		return (0);
	lst_size = 0;
	node = lst;
	while (node -> next)
	{
		lst_size ++;
		node = node -> next;
	}
	return (lst_size + 1);
}
