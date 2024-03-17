/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:55:03 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/13 19:58:52 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*i;
	t_list	*nn;

	if (!*lst)
	{
		return ;
	}
	i = *lst;
	while (i)
	{
		nn = i->next;
		ft_lstdelone(i, del);
		i = nn;
	}
	*lst = NULL;
}
