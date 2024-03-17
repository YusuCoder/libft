/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:32:09 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/15 16:04:17 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The ft_lstmap function creates a new linked list by applying
	a given function to each element of the original list. It returns a pointer
	to the head of the new list. If memory allocation fails during the process,
	it deallocates any allocated memory and returns NULL to indicate failure.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*i;
	t_list	*n;
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
