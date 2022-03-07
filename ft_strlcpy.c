/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:47:40 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/17 16:19:27 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Copies up to n - 1 characters from string src to dest.                */
/*   -> Return the total length of the string the function tried to create,   */
/*      it means the lenght of src.                                           */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	cont;
	size_t	c;

	cont = 0;
	while (src[cont] != '\0')
		cont++;
	if (n == 0)
		return (cont);
	c = 0;
	while (src[c] != '\0' && c < (n - 1))
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (cont);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	char src[] = "Teste";
	char dest[10];
	printf("%lu\n", ft_strlcpy(dest, src, 6));
	printf("%s\n", dest);
}*/