/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:37:13 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/26 18:38:49 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Copies n bytes from memory area src to memory area dst.               */
/*   -> If dst and src overlap, behavior is undefined.                        */
/*   -> Return the original value of dst.                                     */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	c;

	c = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (c < n)
	{
		((unsigned char *)dst)[c] = ((unsigned char *)src)[c];
		c++;
	}
	return (dst);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	char	g[] = "Teste";
	char	h[50];
	ft_memcpy(h, g, 5);
	printf("%s\n", h);
}*/