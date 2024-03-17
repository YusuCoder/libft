/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:22:57 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/15 21:00:41 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	ft_lstlast function iterates through the linked list to find the last element
	and returns a pointer to it. If the input list is empty (NULL),
	it returns NULL, indicating that there's no last element to find.
*/

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

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
