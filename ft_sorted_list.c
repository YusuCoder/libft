/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 14:56:10 by ryusupov          #+#    #+#             */
/*   Updated: 2024/05/09 22:03:28 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	list_sorted(t_ryusupov *lst)
{
	while (lst->next != NULL)
	{
		if (lst->r_content > lst->next->r_content)
		{
			return (0);
		}
		lst = lst->next;
	}
	return (1);
}
