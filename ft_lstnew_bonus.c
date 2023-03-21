/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earriaga <earriaga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:54:35 by earriaga          #+#    #+#             */
/*   Updated: 2023/03/21 12:32:53 by earriaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Content: el contenido con el que crear el nodo
// Devuelve: El nuevo nodo

// Crea un nuevo nodo utilizando malloc().
// La variable miembro 'content' se inicializa con
// el contenido del parametro 'content'. La variable
// 'next', con NULL.

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node -> content = (void *)content;
	node -> next = NULL;
	return (node);
}
