
// Returns true if c is a 7-bit unsigned char value that
// fits into the ASCII character set.

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*
int main(void) 
{
	printf("VALUE_FT: %d\n", ft_isascii(1));
	printf("VALUE_OR: %d\n", isascii(1));
	return (0);
}*/