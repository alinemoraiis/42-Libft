/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:58:01 by ados-rei          #+#    #+#             */
/*   Updated: 2022/03/03 16:34:09 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Allocates memory and returns a new node.                              */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(*node));
	if (node == NULL)
		return (node);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*    TESTING   */
/*#include <stdio.h>
int main ()
{
	t_list	*elem;
	char	str[] = "aline";

	elem = ft_lstnew(str);
	printf("%s\n", (char *)elem->content);
}*/
