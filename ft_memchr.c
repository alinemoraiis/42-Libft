/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:47:16 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/21 15:50:16 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Locates the first occurence of c in string s.                         */
/*   -> Returns a pointer to the byte located.                                */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			cont;
	unsigned char	*str;

	str = (unsigned char *)s;
	cont = 0;
	while (cont < n)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
		cont++;
	}
	return (NULL);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	printf("%s\n", (char *)ft_memchr("aline", 'l', 8));
}*/