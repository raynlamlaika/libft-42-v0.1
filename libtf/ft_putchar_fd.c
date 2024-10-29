/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:08:54 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/27 14:33:56 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <stdio.h>
// #include <fcntl.h>
// int main()
// {
// 	int fd , fdout;
// 	fd = open("file.txt",O_RDWR);
//     ft_putchar_fd('o',3);
// 	printf("%d  ",fd);
// }