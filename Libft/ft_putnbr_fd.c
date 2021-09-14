/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:56:23 by inunez-g          #+#    #+#             */
/*   Updated: 2021/09/13 10:56:26 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	a;

	if (n == (-2147483648))
	{
		write(fd, "-2147483648", 11);
	}
	if (n < 0 && n != -2147483648)
	{
		n = n * (-1);
		write(fd, "-", 1);
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	if (n < 10 && n >= 0)
	{
		a = n + '0';
		write(fd, &a, 1);
	}
}
