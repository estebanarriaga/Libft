
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
