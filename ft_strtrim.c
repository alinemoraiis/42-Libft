/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:35:45 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/28 15:42:03 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Allocates memory and returns a copy of s1 with the characters         */
/*      specified in set removed from the beginning and the end of the string.*/
/* ************************************************************************** */
#include "libft.h"

static int	ft_start(char const *s1, char const *set)
{
	int	start;
	int	len_s1;

	start = 0;
	len_s1 = ft_strlen(s1);
	while (start < len_s1)
	{
		if (ft_strchr(set, s1[start]) == 0)
			break ;
		start++;
	}
	return (start);
}

static int	ft_end(char const *s1, char const *set)
{
	int	end;
	int	len_s1;

	end = 0;
	len_s1 = ft_strlen(s1);
	while (end < len_s1)
	{
		if (ft_strchr(set, s1[len_s1 - end - 1]) == 0)
			break ;
		end++;
	}
	return (len_s1 - end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		start;
	int		end;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	new = (char *)malloc(sizeof(char) * (end - start + 1));
	if (new == NULL)
		return (NULL);
	ft_strlcpy(new, s1 + start, end - start + 1);
	return (new);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	printf("%s\n", ft_strtrim("-  -teste-  -", "  -"));
}*/