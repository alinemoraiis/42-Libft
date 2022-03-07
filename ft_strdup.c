/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:09:18 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/21 16:10:06 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Allocates sufficient memory for a copy of the string s1, does the    */
/*      copy, and returns a pointer to it.                                    */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		cont;

	cont = 0;
	p = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (p == NULL)
		return (p);
	while (s1[cont] != '\0')
	{
		p[cont] = s1[cont];
		cont++;
	}
	p[cont] = '\0';
	return (p);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	printf("%s\n", ft_strdup("teste"));
}*/