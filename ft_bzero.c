
// The bzero() function writes n zeroed bytes to the string s.
// If n is zero, bzero() does nothing.

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*cs;

	cs = (char *) s;
	i = 0;
	while (i < n)
	{
		cs[i] = 0;
		i ++;
	}
}
/*
int main(void)
{
	char s_ft[20];
	char s_or[20];
	
	ft_bzero(s_ft, 10);
	bzero(s_or, 10);
	
	printf("VALUE_FT: %s\n", s_ft);
	printf("VALUE_OR: %s\n", s_or);
	
	return (0);
}*/