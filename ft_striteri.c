/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:30:36 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/24 14:43:23 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Applies the function f on each character of the string passed as      */
/*      argument, passing its index as first argument.                        */
/*   -> Each character is passed by address to f to be modified if necessary. */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	cont;

	if (!s || !f)
		return ;
	cont = 0;
	while (s[cont] != '\0')
	{
		f(cont, s + cont);
		cont++;
	}
}

/*    TESTING   */
/*#include <stdio.h>
void	f(unsigned int cont, char * s)
{
	*s += cont;
}
int main ()
{
	char s[] = "0000000000";
	ft_striteri(s, f);
	printf("%s\n", s);
}*/
