/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_funcs2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 12:55:15 by inunez-g          #+#    #+#             */
/*   Updated: 2021/09/13 12:13:44 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexabase(unsigned long int n, char *base, int *len)
{
	if (n >= 16)
	{
		ft_hexabase(n / 16, base, len);
		ft_hexabase(n % 16, base, len);
	}
	if (n < 16 && n >= 0)
		*len += write(1, &base[n], 1);
}
