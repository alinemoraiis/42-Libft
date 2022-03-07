/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:53:31 by ados-rei          #+#    #+#             */
/*   Updated: 2022/03/01 15:09:52 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Compares byte string s1 against byte string s2.                       */
/*   -> Returns zero if the two strings are identical, otherwise returns the  */
/*      difference between the first two differing bytes.                     */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			cont;
	unsigned char	*ts1;
	unsigned char	*ts2;

	if (n == 0)
		return (0);
	ts1 = (unsigned char *)s1;
	ts2 = (unsigned char *)s2;
	cont = 0;
	while (cont < n)
	{
		if (ts1[cont] != ts2[cont])
			return (ts1[cont] - ts2[cont]);
		cont++;
	}
	return (0);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	printf("%d\n", ft_memcmp("aline1", "aline", 8));
	printf("%d\n", ft_memcmp("aline", "aline", 8));
}*/