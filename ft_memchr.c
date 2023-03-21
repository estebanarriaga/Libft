
// The memchr() function locates the first occurrence of c (converted to an
// unsigned char) in string s.

// The memchr() function returns a pointer to the byte located, or NULL if
// no such byte exists within n bytes.

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		uc;
	const unsigned char	*cs;
	size_t				i;

	uc = (unsigned char) c;
	cs = (const unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (cs[i] == uc)
			return ((void *) &cs[i]);
		i ++;
	}
	return (0);
}
/*
int main(void)
{
	char buffer[] = "Hello, World";

	printf("VALUE_FT: %s\n", ft_memchr(buffer, 'o', sizeof(buffer)));
	printf("VALUE_OR: %s\n", memchr(buffer, 'o', sizeof(buffer)));
	
	return (0);
}*/