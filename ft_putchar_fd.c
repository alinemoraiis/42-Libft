/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:09:05 by ados-rei          #+#    #+#             */
/*   Updated: 2022/02/24 15:15:43 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Outputs the character c to the given file descriptor.                 */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*    TESTING   */
/*int main ()
{
	ft_putchar_fd('a', 1);
}*/
