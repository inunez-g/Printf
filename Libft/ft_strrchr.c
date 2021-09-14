/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:01:31 by inunez-g          #+#    #+#             */
/*   Updated: 2021/09/13 11:01:32 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*result;

	result = s;
	i = ft_strlen(s);
	s = s + i;
	while (*s != *result && (unsigned char)c != *s)
		s--;
	if ((unsigned char)c == *s)
	{
		return ((char *)s);
	}
	else
		return (0);
}
