
// s: La string desde la que crear la substring.
// start: El índice del caracter en ’s’ desde el que
// empezar la substring.
// len: La longitud máxima de la substring

// Reserva (con malloc(3)) y devuelve una substring de
// la string ’s’.
// La substring empieza desde el índice ’start’ y
// tiene una longitud máxima ’len’.

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substring;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (0);
	ft_strlcpy(substring, s + start, len + 1);
	return (substring);
}

// int main(void)
// {
// 	printf("VALUE_FT: %s\n", ft_substr("", 1, 1));
// 	return (0);
// }