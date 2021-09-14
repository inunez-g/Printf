/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inunez-g <inunez-g@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:49:55 by inunez-g          #+#    #+#             */
/*   Updated: 2021/09/13 11:12:22 by inunez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*s_list;

	if (!*lst)
		return ;
	while (*lst)
	{
		s_list = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = s_list;
	}
	*lst = NULL;
}
