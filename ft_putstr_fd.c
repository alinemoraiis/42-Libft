/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:51:16 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/24 15:55:40 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Outputs the string s to the given file descriptor.                    */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	cont;

	if (!s)
		return ;
	cont = 0;
	while (s[cont] != '\0')
	{
		write(fd, &s[cont], 1);
		cont++;
	}
}

/*    TESTING   */
/*int main ()
{
	ft_putstr_fd("aline", 1);
}*/