/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:46:08 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/28 18:54:51 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Allocates memory and convert the int received as an argument to string*/
/* ************************************************************************** */

#include "libft.h"

static char	ft_n_len(int n)
{
	int	n_len;

	n_len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n_len++;
	while (n != 0)
	{
		n_len++;
		n = n / 10;
	}
	return (n_len);
}

static char	*ft_str(char *str, int n_len, int rest, int n)
{
	if (n == 0)
	{	
		str[n_len] = n + 48;
		return (str);
	}
	while (n != 0)
	{
		if (n > 9)
		{
			rest = n % 10;
			str[n_len] = rest + 48;
		}
		else
			str[n_len] = n + 48;
		n = n / 10;
		n_len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		rest;
	int		n_len;

	rest = 0;
	n_len = ft_n_len(n);
	str = malloc((n_len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[n_len] = '\0';
	if (n == -2147483648)
	{
		str[n_len - 1] = '8';
		n = -n;
		n = n / 10;
		n_len--;
	}
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str = ft_str(str, n_len - 1, rest, n);
	return (str);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	printf("%s\n", ft_itoa(-10));
	printf("%s\n", ft_itoa(-2147483648));
}*/