
// lst: la direccion de un puntero a un nodo
// del: un puntero a función utilizado para
// eliminar el contenido de un nodo

// free()

// Elimina y libera el nodo 'lst' dado y todos los
// consecutivos de ese nodo, utilizando la función
// 'del' y free()
// Al final, el puntero a la lista debe ser NULL

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*clear;

	if (lst)
	{
		while (*lst)
		{
			clear = (*lst)-> next;
			ft_lstdelone(*lst, del);
			*lst = clear;
		}
		(*lst) = NULL;
	}
}
