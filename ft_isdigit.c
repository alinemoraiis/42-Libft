/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:28:47 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/17 12:33:25 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ****************************************************************** */
/*   -> Check if the character is a decimal digit.			          */
/*   -> Return: zero for non-digit and return non-zero (1) for digit. */
/*   -> man isdigit													  */
/* ****************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/****************/
/*    TESTING   */
/****************/
/*#include <stdio.h>
int main ()
{
	printf("%d\n", ft_isdigit('A'));
	printf("%d\n", ft_isdigit(55));
	printf("%d\n", ft_isdigit('0'));
	printf("%d\n", ft_isdigit('~'));
}*/
