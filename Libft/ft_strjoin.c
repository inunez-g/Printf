/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:59:07 by inunez-g          #+#    #+#             */
/*   Updated: 2021/09/13 10:59:10 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	char	*final_str;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (0);
	final_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	j = 0;
	if (!final_str)
		return (0);
	while (s1[i] != '\0')
		final_str[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
	{
		final_str[j] = s2[i];
		j++;
		i++;
	}
	final_str[j] = '\0';
	return (final_str);
}
