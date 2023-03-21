/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earriaga <earriaga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:30:47 by earriaga          #+#    #+#             */
/*   Updated: 2023/03/21 12:22:38 by earriaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// s: La string que iterar.
// f: La función a aplicar sobre cada carácter.

// A cada carácter de la string ’s’, aplica la
// función ’f’ dando como parámetros el índice de cada
// carácter dentro de ’s’ y el propio carácter. Genera
// una nueva string con el resultado del uso sucesivo
// de ’f’

// Devuelve: La string creada tras el correcto uso de ’f’ sobre
// cada carácter. NULL si falla la reserva de memoria

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newstr;
	size_t	s_len;
	int		i;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	newstr = (char *)malloc(s_len + 1);
	if (!newstr)
		return (0);
	i = 0;
	while (i < (int)s_len)
	{
		newstr[i] = f(i, (char)s[i]);
		i ++;
	}
	newstr[i] = 0;
	return (newstr);
}
/*
int main(void)
{
	return (0);
}*/