
// The strchr() function locates the first occurrence of c (converted 
// to a char) in the string pointed to by s. The terminating null character
// is considered to be part of the string; therefore if c is
// '\0', the functions locate the terminating '\0'.

// The functions strchr() returns a pointer to the located character,
// or NULL if the character does not appear in the string.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*cs;
	char	ch;

	i = 0;
	ch = c;
	cs = (char *)s;
	while (cs[i])
	{
		if (cs[i] == ch)
			return (cs + i);
		i ++;
	}
	if (cs[i] == ch)
		return (cs + i);
	return (0);
}

// int main(void)
// {
// 	printf("VALUE_FT: %s\n", ft_strchr("tripouille", 't' + 256));
// 	printf("VALUE_OR: %s\n", strchr("tripouille", 't' + 256));
// 	return (0);
// }