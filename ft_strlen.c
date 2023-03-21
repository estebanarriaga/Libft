
// The strlen() function computes the length of the string s.  The strnlen()
// function attempts to compute the length of s, but never scans beyond
// the first maxlen bytes of s.

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}
/*
int main(void)
{
	printf("VALUE_FT: %lu\n", ft_strlen("Hola que tal"));
	printf("VALUE_OR: %lu\n", strlen("Hola que tal"));
	return (0);
}*/