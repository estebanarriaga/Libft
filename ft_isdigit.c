/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earriaga <earriaga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:09:00 by earriaga          #+#    #+#             */
/*   Updated: 2023/03/21 12:20:09 by earriaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns true if c is a decimal digit (‘0’ to ‘9’). 

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*
int main(void)
{
	printf("VALUE_FT: %d\n", ft_isdigit('a'));
	printf("VALUE_OR: %d\n", isdigit('a'));
	return (0);
}*/