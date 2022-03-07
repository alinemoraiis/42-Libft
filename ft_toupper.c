/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:10:43 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/17 17:17:55 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Converts a lower-case letter to the corresponding upper-case letter.  */
/*   -> Return the corresponding upper-case letter.                           */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_toupper('B'));
	printf("%c\n", ft_toupper('1'));
}*/