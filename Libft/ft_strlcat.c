/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:59:27 by inunez-g          #+#    #+#             */
/*   Updated: 2021/09/13 10:59:28 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	c;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	if (i < size && size != 0)
	{
		c = i + j;
		size = size - i - 1;
		j = 0;
		while (src[j] != '\0' && size > 0)
		{
			dest[i++] = src[j++];
			size--;
		}
		dest[i] = '\0';
	}
	else
		c = size + j;
	return (c);
}
