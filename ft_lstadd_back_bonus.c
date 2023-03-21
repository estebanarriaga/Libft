
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
