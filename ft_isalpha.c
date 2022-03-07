/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:08:36 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/17 12:26:28 by ados-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ****************************************************************** */
/*   -> Check if the character is an unsigned char.          		  */	
/*   -> Return: zero for non-char and return non-zero (1) for char.   */	
/*   -> man isalpha													  */
/* ****************************************************************** */		

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/****************/
/*    TESTING   */
/****************/
/*#include <stdio.h>
int main ()
{
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('z'));
	printf("%d\n", ft_isalpha('0'));
	printf("%d\n", ft_isalpha('~'));
}
*/