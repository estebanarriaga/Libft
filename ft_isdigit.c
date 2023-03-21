
// Returns true if c is a decimal digit (‘0’ to ‘9’). 

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*
int main(void)
{
	printf("VALUE_FT: %d\n", ft_isdigit('a'));
	printf("VALUE_OR: %d\n", isdigit('a'));
	return (0);
}*/