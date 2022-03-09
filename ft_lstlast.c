/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:02:25 by ados-rei          #+#    #+#             */
/*   Updated: 2022/03/03 18:16:46 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Returns the last node of the list.                                    */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (lst);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*    TESTING   */
/*#include <string.h>
int main()
{
	int			i;
	char		*content;
	t_list		*val;
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
	
    val = ft_lstlast(elem);
	i = 0;
	content = val->content;
	while (content[i])
		write(1, &(content[i++]), 1);
	write(1, "\n", 1);
	
    elem->next = NULL;
	val = ft_lstlast(elem);
	content = val->content;
	i = 0;
	while (content[i])
		write(1, &(content[i++]), 1);
	write(1, "\n", 1);
	
    elem = NULL;
	val = ft_lstlast(elem);
	if (val == NULL)
		write(1, "NULL", 4);
	write(1, "\n", 1);
}*/
