/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:01:10 by inunez-g          #+#    #+#             */
/*   Updated: 2021/09/13 11:01:12 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *longstr, const char *shortstr,
		size_t	len)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (shortstr[0] == '\0')
		return ((char *)longstr);
	while (longstr[j] != '\0')
	{
		i = 0;
		while (longstr[j + i] == shortstr[i] && (i + j) < len)
		{
			if (longstr[j + i] == '\0' && shortstr[i] == '\0')
				return ((char *) &longstr[j]);
			i++;
		}
		if (shortstr[i] == '\0')
			return ((char *)longstr + j);
		j++;
	}
	return (0);
}
