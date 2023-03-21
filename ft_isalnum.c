/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earriaga <earriaga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:15:47 by earriaga          #+#    #+#             */
/*   Updated: 2023/03/21 12:19:56 by earriaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns true if c is an alphanumeric character (a letter or number); 
// in other words, if either isalpha or isdigit is true of a character, 
// then isalnum is also true.

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	printf("VALUE_FT: %d\n", ft_isalnum('1'));
	printf("VALUE_OR: %d\n", isalnum('1'));
	return (0);
}*/