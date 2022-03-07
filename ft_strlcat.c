/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:23:29 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/17 17:10:29 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Appends string src to the end of dst. It will append at most dstsize  */
/*      - strlen(dst) - 1 characters.                                         */
/*   -> Return the total length of the created string. It means, the initial  */
/*      length of the dst plus the lenght of src.                             */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	c;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	c = 0;
	if (destsize < dest_len + 1)
		return (src_len + destsize);
	if (destsize > dest_len + 1)
	{
		while (src[c] != '\0' && dest_len + 1 + c < destsize)
		{
			dest[dest_len + c] = src[c];
			c++;
		}
	}
	dest[dest_len + c] = '\0';
	return (dest_len + src_len);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	char dest[20] = "Happy ";
	char src[4] = "day!";
	printf("%lu\n", ft_strlcat(dest, src, 10));
	printf("%s\n", dest);
}*/