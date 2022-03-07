/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:02:17 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/28 18:52:17 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Converts the string str to int.                                       */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	cont;
	int	minus;
	int	result;

	cont = 0;
	minus = 1;
	result = 0;
	while (str[cont] == ' ' || str[cont] == '\t' || str[cont] == '\f'
		|| str[cont] == '\r' || str[cont] == '\n' || str[cont] == '\v')
		cont ++;
	if (str[cont] == '-' || str[cont] == '+')
	{
		if (str[cont] == '-')
			minus = -1;
		cont++;
	}
	while (str[cont] >= '0' && str[cont] <= '9')
	{
		result = result * 10 + (str[cont] - '0');
		cont++;
	}
	return (result * minus);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	printf("%d\n", ft_atoi("   -125"));
}*/