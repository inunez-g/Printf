/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:48:27 by inunez-g          #+#    #+#             */
/*   Updated: 2021/09/13 10:48:30 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		n = n * (-1);
		len++;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_intstr(long n, char *str, int len)
{
	if (n < 0)
	{
		str[0] = '-';
		n *= (-1);
	}
	while (n >= 10)
	{
		str[len - 1] = ((n % 10) + '0');
		n /= 10;
		len--;
	}
	str[len - 1] = n + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nbr;

	nbr = n;
	len = ft_len(nbr);
	str = (char *)malloc(ft_len(nbr) * sizeof(char) + 1);
	if (!str)
		return (0);
	str[len] = '\0';
	return (ft_intstr(nbr, str, len));
}
