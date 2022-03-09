/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:35:48 by ados-rei          #+#    #+#             */
/*   Updated: 2022/03/03 17:10:29 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Counts the number of nodes in a list.                                 */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	if (lst == NULL)
		return (0);
	while (lst->next != NULL)
	{
		count++;
		lst = lst->next;
	}
	if (lst->next == NULL)
		count++;
	return (count);
}

/*    TESTING   */
/*#include <string.h>
int main(int argc, const char *argv[])
{
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	char		c;
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
		
    c = ft_lstsize(elem) + 48;
	
    write(1, &c, 1);
	write(1, "\n", 1);
	
    elem->next = NULL;
	c = ft_lstsize(elem) + 48;
	write(1, &c, 1);
	write(1, "\n", 1);
	
    elem = NULL;
	c = ft_lstsize(elem) + 48;
	write(1, &c, 1);
	write(1, "\n", 1);

	return (0);
}*/
