/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earriaga <earriaga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:54:10 by earriaga          #+#    #+#             */
/*   Updated: 2023/03/21 12:23:14 by earriaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The tolower() function converts an upper-case letter to the corresponding
// lower-case letter.  The argument must be representable as an unsigned char
// or the value of EOF.

// If the argument is an upper-case letter, the tolower() function returns
// the corresponding lower-case letter if there is one; otherwise,
// the argument is returned unchanged.

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
int main(void)
{
	printf("VALUE_FT: %c\n", ft_tolower('A'));
	printf("VALUE_OR: %c\n", tolower('A'));
	return (0);
}*/