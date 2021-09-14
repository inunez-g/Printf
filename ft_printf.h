/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:33:53 by inunez-g          #+#    #+#             */
/*   Updated: 2021/09/13 10:36:52 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "Libft/libft.h"

int		ft_printf(const char *str, ...);
void	ft_data_type(va_list ap, const char c, int *len);
void	ft_putchar_and_len(char c, int *len);
void	ft_putstr_and_len(char *s, int *len);
void	ft_putnbr_and_len(int n, int *len);
void	ft_putunbr_and_len(unsigned int n, int *len);
void	ft_hexabase(unsigned long int n, char *base, int *len);

#endif
