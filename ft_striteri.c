/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earriaga <earriaga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:57:15 by earriaga          #+#    #+#             */
/*   Updated: 2023/02/09 14:44:45 by earriaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// s: La string que iterar.
// f: La función a aplicar sobre cada carácter

// A cada carácter de la string ’s’, aplica la función
// ’f’ dando como parámetros el índice de cada
// carácter dentro de ’s’ y la dirección del propio
// carácter, que podrá modificarse si es necesario

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	s_len;

	if (s)
	{
		s_len = ft_strlen(s);
		while (s_len --)
		{
			f(s_len, &s[s_len]);
		}
	}
}
