/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_funcs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 10:32:09 by inunez-g          #+#    #+#             */
/*   Updated: 2021/09/13 12:13:02 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	ft_putchar_and_len(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}

void	ft_putstr_and_len(char *s, int *len)
{
	if (s)
		*len += write(1, s, ft_strlen(s));
	if (!s)
		*len += write(1, "(null)", 6);
}

void	ft_putnbr_and_len(int n, int *len)
{
	char	a;

	if (n == (-2147483648))
	{
		write(1, "-2147483648", 11);
		*len += 11;
	}
	if (n < 0 && n != -2147483648)
	{
		n = n * (-1);
		write(1, "-", 1);
		(*len)++;
	}
	if (n > 9)
	{
		ft_putnbr_and_len(n / 10, len);
		ft_putnbr_and_len(n % 10, len);
	}
	if (n < 10 && n >= 0)
	{
		a = n + '0';
		write(1, &a, 1);
		(*len)++;
	}
}

void	ft_putunbr_and_len(unsigned int n, int *len)
{
	char	a;

	if (n > 9)
	{
		ft_putnbr_and_len(n / 10, len);
		ft_putnbr_and_len(n % 10, len);
	}
	if (n < 10 && n >= 0)
	{
		a = n + '0';
		write(1, &a, 1);
		(*len)++;
	}
}
