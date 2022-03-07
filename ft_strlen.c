/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:29:23 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/17 13:05:47 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Return the lenght of the string s, excluding the NULL character.      */
/*   -> man strlen                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	cont;

	cont = 0;
	while (s[cont] != '\0')
		cont++;
	return (cont);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	printf("%zu\n", ft_strlen("aline"));
	printf("%zu\n", ft_strlen("Hello, how are you?"));
	printf("%zu\n", ft_strlen("!"));
}*/