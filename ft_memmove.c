/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:23:08 by ados-rei          #+#    #+#             */
/*   Updated: 2022/03/01 14:51:13 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Copies n bytes from string src to string dst.                         */
/*   -> The two strings may overlap; the copy is always done in a             */
/*      non-destructive manner.                                               */
/*   -> Return the original value of dst.                                     */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			cont;

	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (n > 0)
		{
			((char *)dst)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		cont = 0;
		while (cont < n)
		{
			((char *)dst)[cont] = ((char *)src)[cont];
			cont++;
		}
	}
	return (dst);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	char k[] = "Teste";
	char l[50];
	ft_memmove(l, k, 3);
	printf("%s\n", l);
}*/
