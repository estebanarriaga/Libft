
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
