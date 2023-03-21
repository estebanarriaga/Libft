/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earriaga <earriaga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:32:55 by earriaga          #+#    #+#             */
/*   Updated: 2023/03/21 12:20:43 by earriaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memcpy() function copies n bytes from memory area src to memory area
// dst.  If dst and src overlap, behavior is undefined.  Applications in
// which dst and src might overlap should use memmove(3) instead.

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*cdst;
	unsigned char	*csrc;
	size_t			i;

	if (!dst && !src)
		return (0);
	cdst = (unsigned char *) dst;
	csrc = (unsigned char *) src;
	i = 0;
	while (i < len)
	{
		cdst[i] = csrc[i];
		i ++;
	}
	return (dst);
}
/*
int main(void)
{
	char src[] = "Hola";
	char dest_ft[0];
	char dest_or[0];

	ft_memcpy(dest_ft, src, 0);
	memcpy(dest_or, src, 0);
	
	printf("VALUE_FT: %s\n", dest_ft);
	printf("VALUE_OR: %s\n", dest_or);
	
	return (0);
}*/