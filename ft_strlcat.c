/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earriaga <earriaga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:16:50 by earriaga          #+#    #+#             */
/*   Updated: 2023/03/21 12:22:26 by earriaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strlcat() appends string src to the end of dst.  It will append at most
// dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
// dstsize is 0 or the original dst string was longer than dstsize (in 
// practice this should not happen as it means that either dstsize is
// incorrect or that dst is not a proper string).

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	if (!dst && !dstsize)
		return (0);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	while (src[i] && i < dstsize - dst_len - 1)
	{
		dst[dst_len + i] = src[i];
		i ++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// int	main(void)
// {
// 	char	dst_ft[30] = "pqrstuvwxyz";
// 	char	dst_or[30] = "pqrstuvwxyz";
// 	char	src[] = "abcd";

// 	printf("RES_FT: %lu , STR: %s\n", ft_strlcat(dst_ft, src, 20), dst_ft);
// 	printf("RES_OR: %lu , STR: %s\n", strlcat(dst_or, src, 20), dst_or);
// 	return (0);
// }