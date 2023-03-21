/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earriaga <earriaga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:41:37 by earriaga          #+#    #+#             */
/*   Updated: 2023/03/21 12:22:54 by earriaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strchr() function locates the first occurrence of c (converted to a 
// char) in the string pointed to by s.  The terminating null character
// is considered to be part of the string; therefore if c is '\0', the
// functions locate the terminating '\0'.

// The functions strchr() returns a pointer to the located character,
// or NULL if the character does not appear in the string.

// The strrchr() function is identical to strchr(),
// except it locates the last occurrence of c.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*cs;
	char	ch;

	ch = c;
	cs = (char *)s;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (cs[len] == ch)
			return ((char *)cs + len);
		len--;
	}
	return (0);
}

// int main(void)
// {
// 	printf("VALUE_FT: %s\n", ft_strrchr("Hola que tal", 'k'));
// 	printf("VALUE_OR: %s\n", strrchr("Hola que tal", 'k'));
// 	return (0);
// }