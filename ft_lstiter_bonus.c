/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earriaga <earriaga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:39:34 by earriaga          #+#    #+#             */
/*   Updated: 2023/03/15 12:38:50 by earriaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// lst: un puntero al primer nodo
// f: un puntero a la funcion que utilizará cada nodo

// Itera la lista 'lst' y aplica la funcion 'f' en el
// contenido de cada nodo

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*iter;

	if (lst)
	{
		while (lst)
		{
			iter = lst -> next;
			f(lst -> content);
			lst = iter;
		}
	}
}
