/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:12:36 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/17 12:37:09 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> The function tests if the character is an alpha or a decimal digit.   */
/*   -> Return: zero if the the character tests false and non-zero if the     */
/*      character tests true.                                                 */
/*   -> man isalnum                                                           */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('z'));
	printf("%d\n", ft_isalnum('0'));
	printf("%d\n", ft_isalnum('~'));
}*/