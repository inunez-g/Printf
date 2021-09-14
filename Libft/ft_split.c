/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:57:29 by inunez-g          #+#    #+#             */
/*   Updated: 2021/09/13 10:57:33 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	free_memory(char **split)
{
	while (*split)
	{
		free(*split);
		(*split)++;
	}
	free(split);
	return (0);
}

int	count_words(const char *s, char c)
{
	int	nbr_words;
	int	i;

	nbr_words = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && i == 0)
		{
			i = 1;
			nbr_words++;
		}
		else if (*s == c)
			i = 0;
		s++;
	}
	return (nbr_words);
}

char	**save_word(const char *s, char c, char **split, int a)
{
	int	r;
	int	counter;
	int	i;

	counter = 0;
	r = 0;
	while (a < count_words(s, c))
	{
		if (s[counter] != c && r == 0)
		{
			r = 1;
			i = counter;
		}
		else if (((s[counter] == c) || (s[counter] == '\0')) && r == 1)
		{
			r = 0;
			split[a] = ft_substr(s, i, (counter - i));
			if (!split[a])
				free_memory(split);
			a++;
		}
		counter++;
	}
	split[a] = 0;
	return (split);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	int		nbr_words;
	int		a;

	a = 0;
	if (!s)
		return (0);
	else
	{
		nbr_words = count_words(s, c);
		split = ((char **)malloc((count_words(s, c) + 1) * sizeof(char *)));
		if (!split)
			return (0);
	}
	return (save_word(s, c, split, a));
}
