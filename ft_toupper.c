/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earriaga <earriaga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:02:12 by earriaga          #+#    #+#             */
/*   Updated: 2023/03/21 12:23:19 by earriaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The toupper() function converts a lower-case letter to the corresponding
// upper-case letter.  The argument must be representable as an unsigned
// char or the value of EOF.

// If the argument is a lower-case letter, the toupper() function returns
// the corresponding upper-case letter if there is one; otherwise,
// the argument is returned unchanged.

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*
int main(void)
{
	printf("VALUE_FT: %c\n", ft_toupper('1'));
	printf("VALUE_OR: %c\n", toupper('1'));
	return (0);
}*/