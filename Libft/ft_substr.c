/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:02:20 by inunez-g          #+#    #+#             */
/*   Updated: 2021/09/13 11:02:22 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const	*s, unsigned int start, size_t	len)
{
	char	*final_str;
	size_t	i;
	size_t	j;
	size_t	reallen;

	i = start;
	j = 0;
	if (!s)
		return (0);
	if (ft_strlen(s) < (start + len))
		reallen = (ft_strlen(s) - start);
	else
		reallen = len;
	if (ft_strlen(s) < start)
		reallen = 0;
	final_str = (char *)malloc((reallen + 1) * (sizeof(char)));
	if (!final_str)
		return (0);
	while (i < ft_strlen(s) && j < reallen)
		final_str[j++] = s[i++];
	final_str[j] = '\0';
	return (final_str);
}
