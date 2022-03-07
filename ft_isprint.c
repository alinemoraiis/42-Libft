/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:14:45 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/17 12:59:35 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Check if the character is a printable character.                      */
/*   -> Return: zero for non-printable and non-zero for printable characters. */
/*   -> man isprint                                                           */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint('z'));
	printf("%d\n", ft_isprint('!'));
	printf("%d\n", ft_isprint(1));
}*/