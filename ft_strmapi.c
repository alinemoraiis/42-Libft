/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:23:48 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/24 14:51:50 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Applies the function f to each character of the string s.             */
/*   -> Return a new string resulting from successive application of f.       */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*rtn;
	unsigned int	cont;

	if (!s)
		return (NULL);
	cont = 0;
	rtn = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (rtn == NULL)
		return (NULL);
	while (s[cont] != '\0')
	{
		rtn[cont] = (*f)(cont, s[cont]);
		cont++;
	}
	rtn[cont] = '\0';
	return (rtn);
}

/*    TESTING   */
/*#include <stdio.h>
char	f(unsigned int cont, char s)
{
	return (s - 32);
}
int main ()
{
	char s[] = "aline";
	printf("%s\n", ft_strmapi(s, f));
}*/
