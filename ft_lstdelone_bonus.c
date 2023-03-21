
// lst: El nodo a liberar
// del: un puntero a la funcion utilizada para liberar
// el contenido del nodo

// free()

// Toma como parámetro el nodo 'lst' y libera la memoria
// del contenido utilizando la función 'del', además de 
// liberar el nodo.
// La memoria de 'next' no debe liberarse.

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst -> content);
		free(lst);
	}
}
