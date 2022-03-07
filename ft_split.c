/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:30:16 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/28 17:41:07 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Allocates memory and returns an array of strings obtained by splitting*/
/*      s using the character c as a delimiter.                               */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_str(char const *s, char c)
{
	int	rtn;
	int	check;

	rtn = 0;
	check = 0;
	while (*s)
	{
		if (*s != c && check == 0)
		{
			check = 1;
			rtn++;
		}
		else if (*s == c)
			check = 0;
		s++;
	}
	return (rtn);
}

static char	*ft_create_str(char const *s, int start, int end)
{
	char	*str;
	int		cont;

	cont = 0;
	str = malloc((end - start + 1) * sizeof(char));
	while (start < end)
	{
		str[cont] = s[start];
		cont++;
		start++;
	}
	str[cont] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**rtn;
	size_t	i;
	size_t	index;
	int		check;

	i = 0;
	index = 0;
	check = -1;
	rtn = malloc((ft_count_str(s, c) + 1) * sizeof(char *));
	if (rtn == NULL)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && check < 0)
			check = i;
		else if ((s[i] == c || i == ft_strlen(s)) && check >= 0)
		{
			rtn[index] = ft_create_str(s, check, i);
			check = -1;
			index++;
		}
		i++;
	}
	rtn[index] = NULL;
	return (rtn);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	char	**a;
	a = ft_split("jestemzzbogiezmalga*", 'z');
	while (*a)
	{
		printf("%s\n", *a);
		a++;
	}
}*/
