/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:14:11 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/28 18:08:48 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Allocates and returns a new substring from the string s.              */
/*   -> The substring begins at index start and is of maximum size len.       */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	cont;
	size_t	c;

	if (len > ft_strlen(s))
		len = ft_strlen(s);
	ptr = (char *)malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	cont = start;
	c = 0;
	while (cont < ft_strlen(s) && c < len)
	{
		ptr[c] = s[cont];
		c++;
		cont++;
	}
	ptr[c] = '\0';
	return (ptr);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	printf("%s\n", ft_substr("subset function implementation", 7, 12));
}*/
