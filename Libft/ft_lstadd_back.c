/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:48:59 by inunez-g          #+#    #+#             */
/*   Updated: 2021/09/13 10:49:07 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*s_list;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	s_list = ft_lstlast(*lst);
	s_list->next = new;
}
