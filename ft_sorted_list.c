/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 14:56:10 by ryusupov          #+#    #+#             */
/*   Updated: 2024/05/01 14:48:55 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	list_sorted(t_list *lst)
{
	while (lst->next != NULL)
	{
		if (lst->content > lst->next->content)
		{
			return (0);
		}
		lst = lst->next;
	}
	return (1);
}
