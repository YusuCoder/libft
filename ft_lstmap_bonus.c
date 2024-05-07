/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:32:09 by ryusupov          #+#    #+#             */
/*   Updated: 2024/05/04 20:39:57 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The ft_lstmap function creates a new linked list by applying
	a given function to each element of the original list. It returns a pointer
	to the head of the new list. If memory allocation fails during the process,
	it deallocates any allocated memory and returns NULL to indicate failure.
*/

t_ryusupov	*ft_lstmap(t_ryusupov *lst, void *(*f)(void *), void (*del)(void *))
{
	t_ryusupov	*i;
	t_ryusupov	*n;
	void	*e;

	i = (void *)0;
	while (lst)
	{
		e = f(lst->content);
		if (e != NULL)
		{
			n = ft_lstnew(e);
			if (!n)
			{
				del(e);
				ft_lstclear(&i, del);
				return (NULL);
			}
			ft_lstadd_back(&i, n);
		}
		lst = lst->next;
	}
	return (i);
}
