
// The tolower() function converts an upper-case letter to the corresponding
// lower-case letter.  The argument must be representable as an unsigned char
// or the value of EOF.

// If the argument is an upper-case letter, the tolower() function returns
// the corresponding lower-case letter if there is one; otherwise,
// the argument is returned unchanged.

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
int main(void)
{
	printf("VALUE_FT: %c\n", ft_tolower('A'));
	printf("VALUE_OR: %c\n", tolower('A'));
	return (0);
}*/