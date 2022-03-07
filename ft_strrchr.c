/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:33:50 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/28 14:54:05 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Locates the last occurrence of c in the string pointed to by s.       */
/*   -> Returns a pointer to the located character.                           */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = NULL;
	while (*s != '\0')
	{
		if ((char)*s == (char)c)
			str = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (str);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	printf("%s\n", ft_strrchr("banana", 'b'));
	printf("%s\n", ft_strrchr("banana", 'n'));
}*/