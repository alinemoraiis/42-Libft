/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:02:52 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/24 16:07:12 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Outputs the string s to the given file descriptor followed by a       */
/*      newline.                                                              */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
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
	write(fd, "\n", 1);
}

/*    TESTING   */
/*int main ()
{
	ft_putendl_fd("aline", 1);
}*/