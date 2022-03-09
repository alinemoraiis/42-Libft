/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:29:32 by ados-rei          #+#    #+#             */
/*   Updated: 2022/03/08 13:31:47 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Takes as a parameter a node and frees the memory of the node’s        */
/*      content using the function ’del’ given as a parameter and free the    */
/*      node.                                                                 */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

/*    TESTING   */
/*#include <string.h>
void	ft_print_result(t_list *elem)
{
	write(1, elem->content, strlen(elem->content));
}

void	ft_del(void *content)
{
	free(content);
}

int main()
{
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	char		*str = strdup("lorem");
	char		*str2 = strdup("ipsum");
	char		*str3 = strdup("dolor");
	char		*str4 = strdup("sit");

	elem = ft_lstnew(str);
	elem2 = ft_lstnew(str2);
	elem3 = ft_lstnew(str3);
	elem4 = ft_lstnew(str4);

	elem->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;

	ft_lstdelone(elem3, &ft_del);
	if (elem)
		ft_print_result(elem);
	else
		write(1, "NULL", 4);
	write(1, "\n", 1);
	if (elem2)
		ft_print_result(elem2);
	else
		write(1, "NULL", 4);
	write(1, "\n", 1);
	if (elem4)
		ft_print_result(elem4);
	else
		write(1, "NULL", 4);
}*/
