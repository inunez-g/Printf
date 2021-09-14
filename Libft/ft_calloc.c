/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:45:09 by inunez-g          #+#    #+#             */
/*   Updated: 2021/09/13 10:45:14 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	count, size_t	size)
{
	size_t	allsize;
	char	*dest;

	allsize = count * size;
	dest = (char *)malloc(allsize);
	if (!(dest))
		return (0);
	ft_memset(dest, 0, allsize);
	return (dest);
}
