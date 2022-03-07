/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:45:18 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/17 14:45:26 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> ft_memset() writes len bytes of value c (converted to an unsigned     */
/*      char) to the string b.                                                */
/*   -> Return: the first argument.                                           */
/*   -> man memset                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	while (len > 0)
	{
		((unsigned char *)b)[len - 1] = c;
		len--;
	}
	return (b);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	char a[] = "aline";
	printf("%s\n", ft_memset(a, 'A', 1));
	printf("%s\n", ft_memset(a, 'A', 2));
	printf("%s\n", ft_memset(a, 'A', 5));
}*/
