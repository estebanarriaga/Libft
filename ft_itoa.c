
// n: el entero a convertir

// Devuelve: La string que represente el número.
// NULL si falla la reserva de memoria

// Utilizando malloc(3), genera una string que
// represente el valor entero recibido como argumento.
// Los números negativos tienen que gestionarse.

#include "libft.h"

static char	*ft_helper(char *num, int is_negative, int n)
{
	int		aux;
	size_t	count;

	aux = n;
	count = 1;
	while (aux > 9)
	{
		count ++;
		aux /= 10;
	}
	if (is_negative)
		count ++;
	num = (char *) malloc(sizeof(char) * count + 1);
	if (!num)
		return (0);
	num[count] = '\0';
	if (is_negative)
		num[0] = '-';
	while (n > 0)
	{
		num[count - 1] = (n % 10) + 48;
		count --;
		n /= 10;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		is_negative;

	num = NULL;
	is_negative = 0;
	if (n == 0)
	{
		num = malloc(sizeof(char) * 2);
		if (!num)
			return (NULL);
		num[0] = '0';
		num[1] = '\0';
		return (num);
	}
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		is_negative = 1;
		n *= -1;
	}
	return (ft_helper(num, is_negative, n));
}

/*
int	main(void)
{
	printf("VALUE: %s\n", ft_itoa(-2147483648));
	return (0);
}*/