/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earriaga <earriaga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:01:53 by earriaga          #+#    #+#             */
/*   Updated: 2023/03/21 12:22:22 by earriaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// s1: La primera string.
// s2: La string a añadir a ’s1’.

// Reserva (con malloc(3)) y devuelve una nueva
// string, formada por la concatenación de ’s1’ y
// ’s2’

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*newstr;
	size_t	size_s1;
	size_t	size_s2;

	if (!s1 || !s2)
		return (0);
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	newstr = (char *)malloc(size_s1 + size_s2 + 1);
	if (!newstr)
		return (0);
	ft_memcpy((char *)newstr, s1, size_s1 + 1);
	ft_strlcat(newstr, s2, size_s1 + size_s2 + 1);
	return (newstr);
}
/*
int main(void)
{
	printf("VALUE_FT: %s\n", ft_strjoin("Hello, ", "world"));
	return (0);
}*/