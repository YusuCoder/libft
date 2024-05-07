/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:55:03 by ryusupov          #+#    #+#             */
/*   Updated: 2024/05/04 20:39:19 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_ryusupov **lst, void (*del)(void *))
{
	t_ryusupov	*i;
	t_ryusupov	*nn;

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

/* int	main(void)
{
	int		data1;
	int		data2;
	int		data3;
	t_ryusupov	*head;
	t_ryusupov	*temp;

	data1 = 10;
	data2 = 20;
	data3 = 30;
	head = ft_lstnew(&data1);
	ft_lstadd_back(&head, ft_lstnew(&data2));
	ft_lstadd_back(&head, ft_lstnew(&data3));
	printf("Original list:\n");
	temp = head;
	while (temp)
	{
		printf("%d ", *((int *)temp->content));
		temp = temp->next;
	}
	printf("\n");
	ft_lstclear(&head, free);
	printf("List after clearing:\n");
	if (head == NULL)
	{
		printf("List is empty.\n");
	}
	else
	{
		printf("Error: List is not empty after clearing.\n");
	}
	return (0);
} */
