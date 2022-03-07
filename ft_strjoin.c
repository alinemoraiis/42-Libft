/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:24:21 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/21 16:32:51 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Allocates memory and returns a new string, which is the result of the */
/*      concatenation of s1 and s2.                                           */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		cont;
	int		cont2;

	new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (new == NULL)
		return (NULL);
	cont = 0;
	while (s1[cont] != '\0')
	{	
		new[cont] = s1[cont];
		cont++;
	}
	cont2 = 0;
	while (s2[cont2] != '\0')
	{
		new[cont] = s2[cont2];
		cont++;
		cont2++;
	}
	new[cont] = '\0';
	return (new);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	printf("%s\n", ft_strjoin("teste ", "da aline"));
}*/