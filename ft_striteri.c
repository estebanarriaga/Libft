
// s: La string que iterar.
// f: La función a aplicar sobre cada carácter

// A cada carácter de la string ’s’, aplica la función
// ’f’ dando como parámetros el índice de cada
// carácter dentro de ’s’ y la dirección del propio
// carácter, que podrá modificarse si es necesario

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	s_len;

	if (s)
	{
		s_len = ft_strlen(s);
		while (s_len --)
		{
			f(s_len, &s[s_len]);
		}
	}
}
