/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:06:19 by ryusupov          #+#    #+#             */
/*   Updated: 2024/05/04 20:40:12 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	ft_lstsize function calculates the size (number of elements) of a linked list
	by iterating through each element and counting them. It returns the count as
	an integer value. If the input list is empty, it returns 0,
	indicating that the list has no elements.
*/
int	ft_lstsize(t_ryusupov *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
