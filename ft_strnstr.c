/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:58:34 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/21 15:59:30 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Locates the first occurrence of the null-terminated string needle in  */
/*      the string haystack, where not more than len characters are searcged. */
/*   -> If needle is an empty string, haystack is returned; if needle occurs  */
/*      nowhere in haystack, NULL is returned; otherwise a pointer to the     */
/*      first character of the first occurrence of needle is returned.        */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	c;
	size_t	cont;

	cont = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[cont] != '\0' && cont < len)
	{
		c = 0;
		while (cont + c < len && haystack[cont + c] == needle[c])
		{
			if (needle[c + 1] == '\0')
				return ((char *)haystack + cont);
			c++;
		}
		cont++;
	}
	return (NULL);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	printf("%s\n", ft_strnstr("teste da aline", "da", 15));
}*/