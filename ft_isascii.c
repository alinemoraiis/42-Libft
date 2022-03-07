/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:58:43 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/17 12:54:05 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Check if the character is an ASCII.                                   */
/*   -> Return: zero for non-ASCII characters and non-zero for ASCII          */
/*      characters.                                                           */
/*   -> man isascii                                                           */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", ft_isascii('!'));
	printf("%d\n", ft_isascii('0'));
	printf("%d\n", ft_isascii(128));
}*/