/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:05:44 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/27 19:00:16 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Allocates enough space for count objects that are size bytes of       */
/*      memory each and returns a pointer to the allocated memory.            */
/*   -> The allocated memory is filled with bytes of value zero.              */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(size * count);
	if (p == NULL)
		return (0);
	ft_bzero(p, size * count);
	return (p);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	printf("%s\n", (char *)ft_calloc(2, 2));
}*/