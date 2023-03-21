/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earriaga <earriaga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:12:19 by earriaga          #+#    #+#             */
/*   Updated: 2023/03/21 12:25:14 by earriaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns true if c is an alphabetic character (a letter).
// If islower or isupper is true of a character, then isalpha 
// is also true.

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("VALUE_FT:  %d\n", ft_isalpha(' '));
	printf("VALUE_OR:  %d\n", isalpha(' '));
	return (0);
}*/