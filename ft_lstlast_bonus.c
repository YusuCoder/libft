/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:22:57 by ryusupov          #+#    #+#             */
/*   Updated: 2024/05/04 20:39:50 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	ft_lstlast function iterates through the linked list to find the last element
	and returns a pointer to it. If the input list is empty (NULL),
	it returns NULL, indicating that there's no last element to find.
*/

t_ryusupov	*ft_lstlast(t_ryusupov *lst)
{
	t_ryusupov	*last;

	if (!lst)
	{
		return (NULL);
	}
	last = lst;
	while (last->next != NULL)
	{
		last = last->next;
	}
	return (last);
}
