/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:25:35 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/17 17:29:00 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Converts an upper-case letter to the corresponding lower-case letter. */
/*   -> Returns the corresponding lower-case letter.                          */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", ft_tolower('b'));
	printf("%c\n", ft_tolower('1'));
}*/