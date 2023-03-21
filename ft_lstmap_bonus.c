
// lst: un puntero a un nodo
// f: la direccion de un puntero a una funcion usada
// en la iteración de cadad elemento de la lista
// del: un puntero a la función utilizado para eliminar
// el contenido de un nodo, si es necesario

// Devuelve la nueva lista, NULL si falla la reserva de memoria

// malloc() y free()

// Itera la lista 'lst' y aplica la funcion 'f' al
// contenido de cada nodo. Crea una lista resultante de la
// aplicación correcta y sucesiva de la funcion 'f' sobre cada
// nodo. La funcion 'del' se utiliza para elminiar el contenido de
// un nodo, si hace falta.

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*start;

	if (!lst || !f || !del)
		return (NULL);
	new = ft_lstnew(f(lst -> content));
	if (!new)
		return (NULL);
	start = new;
	lst = lst -> next;
	while (lst)
	{
		new -> next = ft_lstnew(f(lst -> content));
		if (!new)
			return (NULL);
		lst = lst -> next;
		new = new -> next;
	}
	return (start);
}
