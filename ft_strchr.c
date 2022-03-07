/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:27:58 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/28 14:51:52 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Locates the first occurrence of c in the string s.                    */
/*   -> Return a pointer to the located character.                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if ((char)*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (NULL);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	printf("%s\n", ft_strchr("aline", 'i'));
	printf("%s\n", ft_strchr("aline", 'p'));
}*/