/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earriaga <earriaga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:15:57 by earriaga          #+#    #+#             */
/*   Updated: 2023/03/21 12:20:46 by earriaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memmove() function copies len bytes from string src to string dst.
// The two strings may overlap; the copy is always done in a non-destructive
// manner.

// If the source and destination memory areas overlap, the behavior of
// the function is undefined and it may lead to data corruption or crashes.

// In this version of the function, it checks whether the source pointer
// is greater than or equal to the destination pointer and if so,
// it copies the data in reverse order, from the last byte to the first byte,
// ensuring that the data is copied correctly even if the source and
// destination memory areas overlap.

// This function return dst

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned const char	*csrc;
	unsigned char		*cdst;

	if (!dst && !src)
		return (0);
	cdst = (unsigned char *) dst;
	csrc = (unsigned const char *) src;
	if (src < dst && src + len > dst)
		while (len--)
			cdst[len] = csrc[len];
	else
		while (len --)
			*cdst++ = *csrc++;
	return (dst);
}
/*
int main(void)
{
	const char src[] = "Hello, World";
	char dst_ft[] = "Hello ";
	char dst_or[] = "Hello ";
	
	ft_memmove(dst_ft, src, 5);
	memmove(dst_or, src, 5);
	
	printf("VALUE_FT: %s\n", dst_ft);
	printf("VALUE_FT: %s\n", dst_or);
	
	return (0);
}*/