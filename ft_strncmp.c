
// The strcmp() and strncmp() functions lexicographically compare the
// null-terminated strings s1 and s2.

// The strncmp() function compares not more than n characters.  Because
// strncmp() is designed for comparing strings rather than binary data,
// characters that appear after a `\0' character are not compared.

// The strcmp() and strncmp() functions return an integer greater than,
// equal to, or less than 0, according as the string s1 is greater than,
// equal to, or less than the string s2.  The comparison is done using
// unsigned characters, so that `\200' is greater than `\0'.

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		res;

	i = 0;
	res = 0;
	while (s1[i] != '\0' && i < n && s1[i] == s2[i])
		i ++;
	if (i == n)
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "abcdd";
	char	s2[] = "abcd";

	printf("VALUE_FT: %d\n", ft_strncmp(s1, s2, 5));
	printf("VALUE_OR: %d\n", strncmp(s1, s2, 5));
	return (0);
}*/