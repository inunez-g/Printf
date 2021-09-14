/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:36:10 by inunez-g          #+#    #+#             */
/*   Updated: 2021/09/13 10:27:01 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

void	ft_data_type(va_list ap, const char c, int *len)
{
	if (c == 'c')
		ft_putchar_and_len(va_arg(ap, int), len);
	if (c == 's')
		ft_putstr_and_len(va_arg(ap, char *), len);
	if (c == 'p')
	{
		write(1, "0x", 2);
		ft_hexabase(va_arg(ap, unsigned long int), "0123456789abcdef", len);
		*len += 2;
	}
	if (c == 'd' || c == 'i')
		ft_putnbr_and_len(va_arg(ap, int), len);
	if (c == 'u')
		ft_putunbr_and_len(va_arg(ap, unsigned int), len);
	if (c == 'x')
		ft_hexabase(va_arg(ap, unsigned int), "0123456789abcdef", len);
	if (c == 'X')
		ft_hexabase(va_arg(ap, unsigned int), "0123456789ABCDEF", len);
	if (c == '%')
		ft_putchar_and_len('%', len);
}

int	ft_printf(const char *str, ...)
{
	va_list			ap;
	unsigned int	i;
	int				len;

	va_start(ap, str);
	i = 0;
	len = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			ft_putchar_and_len(str[i], &len);
		if (str[i] == '%')
		{
			i++;
			ft_data_type(ap, str[i], &len);
		}
		i++;
	}
	return (len);
}
