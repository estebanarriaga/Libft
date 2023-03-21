
// Elimina todos los caracteres de la string ’set’
// desde el principio y desde el final de ’s1’, hasta
// encontrar un caracter no perteneciente a ’set’. La
// string resultante se devuelve con una reserva de
// malloc(3)

// s1: La string que debe ser recortada.
// set: Los caracteres a eliminar de la string.

// Devuelve: La string recortada.
// NULL si falla la reserva de memoria.

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	res = (char *)malloc(end - start + 1);
	if (!res)
		return (NULL);
	ft_memcpy(res, s1 + start, end - start);
	res[end - start] = '\0';
	return (res);
}

/*
int main(void)
{
	printf("RESULT: %s\n", ft_strtrim("-*- Hello World -*-", "-*"));
	return (0);
}*/