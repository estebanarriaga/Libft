/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earriaga <earriaga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:14:26 by earriaga          #+#    #+#             */
/*   Updated: 2023/03/21 12:20:12 by earriaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns true if c is a printing character. 
// Printing characters include all the graphic characters,
// plus the space (‘ ’) character. 

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("VALUE_FT: %d\n", ft_isprint(127));
	printf("VALUE_OR: %d\n", isprint(127));
	return (0);
}*/