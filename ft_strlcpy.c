/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earriaga <earriaga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:07:10 by earriaga          #+#    #+#             */
/*   Updated: 2023/03/21 12:22:30 by earriaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strlcpy() and strlcat() take the full size of the destination buffer and
// guarantee NUL-termination if there is room.  Note that room for the NUL 
// should be included in dstsize.

// strlcpy() copies up to dstsize - 1 characters from the string src to dst,
// NUL-terminating the result if dstsize is not 0.

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	count = 0;
	while (src[count] != 0 && count < (dstsize - 1))
	{
		dst[count] = src[count];
		count ++;
	}
	dst[count] = '\0';
	return (src_len);
}
/*
int	main(void)
{
	size_t length = -1;
	char dest_ft[length];
	char dest_or[length];
	
	ft_strlcpy(dest_ft, "Hola que tal", length);
	strlcpy(dest_or, "Hola que tal", length);
	
	printf("VALUE_FT: %s\n", dest_ft);
	printf("VALUE_OR: %s\n", dest_or);
	return (0);
}*/