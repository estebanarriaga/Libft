/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earriaga <earriaga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:03:37 by earriaga          #+#    #+#             */
/*   Updated: 2023/03/21 12:22:03 by earriaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// s: La string a separar.
// c: El carácter delimitador.

// Davuelve: El array de nuevas strings resulatente de la
// separación.
// NULL si falla la reserva de memoria.

// malloc, free

// Reserva (utilizando malloc(3)) un array de strings
// resultante de separar la string ’s’ en substrings
// utilizando el caracter ’c’ como delimitador. El
// array debe terminar con un puntero NULL.

#include "libft.h"

static char	**ft_mem_alloc(const char *s, char c)
{
	int		i;
	char	**s_malloc;
	int		arr_num;

	i = 0;
	arr_num = 0;
	if (*s && s[0] != c)
		arr_num++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			arr_num++;
		i++;
	}
	s_malloc = (char **)malloc((arr_num + 1) * sizeof(char *));
	if (!s_malloc)
		return (0);
	return (s_malloc);
}

static void	ft_free(char **str_arr)
{
	int	i;

	i = 0;
	if (str_arr != 0)
	{
		while (str_arr[i] != 0)
		{
			free(str_arr[i]);
			i ++;
		}
		free(str_arr);
	}
}

static char	**ft_split_aux(char **res, char const *s, char c, int arr_count)
{
	int		current;
	int		last;

	current = 0;
	last = 0;
	while (s[current])
	{
		while (s[current] == c)
			current ++;
		last = current;
		while (s[current] && s[current] != c)
			current ++;
		if (current > last)
		{
			res[arr_count] = ft_substr(s, last, current - last);
			if (!res[arr_count])
			{
				ft_free(res);
				return (0);
			}
			arr_count ++;
		}
	}
	res[arr_count] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		arr_count;

	if (!s)
		return (0);
	res = ft_mem_alloc(s, c);
	if (!res)
		return (0);
	arr_count = 0;
	res = ft_split_aux(res, s, c, arr_count);
	if (!res)
		return (0);
	return (res);
}

// int main(void)
// {
// 	ft_split("\0aa\0bbb", '\0');
// 	ft_split("                  olol", ' '); // Fails
// 	ft_split("split  ||this|for|me|||||!|", '|');
// 	ft_split("Hellow how are you", 'o');
// 	ft_split("      split       this for   me  !       ", ' ');
// 	ft_split("olol                     ", ' ');
// 	return (0);
// }