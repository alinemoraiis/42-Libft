/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:40:57 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/26 18:54:43 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Compare (not more than n characters) the null-terminated strings s1   */ 
/*      and s2.                                                               */
/*   -> Return an integer greater than, equal to, or less than 0, according   */
/*      as the string s1 is greater than, equal to, os less than s2.          */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cont;

	cont = 0;
	if (n == 0)
		return (0);
	while ((s1[cont] != '\0' && s2[cont] != '\0') && (cont < n - 1)
		&& (s1[cont] == s2[cont]))
		cont++;
	return ((unsigned char)s1[cont] - (unsigned char)s2[cont]);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	printf("%d\n", ft_strncmp("aline1", "aline", 8));
}*/