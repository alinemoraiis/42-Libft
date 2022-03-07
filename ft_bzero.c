/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:10:53 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/17 14:49:09 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> ft_bzero writes zeroed bytes to the string s. If n is zero, ft_bzero  */
/*      does nothing.                                                         */
/*   -> man bzero                                                             */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	cont;

	cont = 0;
	while (cont < n)
	{
		((unsigned char *)s)[cont] = 0;
		cont++;
	}
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	char a[] = "aline";
	char b[] = "aline";
	ft_bzero(a, 0);
	ft_bzero(b, 1);
	printf("%s\n", a);
	printf("%c\n", b[0]);
	printf("%c\n", b[1]);
}*/