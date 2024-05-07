/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:35:36 by ryusupov          #+#    #+#             */
/*   Updated: 2024/05/04 20:37:45 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_ryusupov **lst, t_ryusupov *new)
{
	t_ryusupov	*new_n;

	if (!lst || !new)
	{
		return ;
	}
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new_n = *lst;
	while (new_n->next != NULL)
	{
		new_n = new_n->next;
	}
	new_n->next = new;
}
