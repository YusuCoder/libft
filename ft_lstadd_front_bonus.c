/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:21:13 by ryusupov          #+#    #+#             */
/*   Updated: 2024/04/28 15:43:24 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
	{
		return ;
	}
	new->next = *lst;
	*lst = new;
}

// void	print_nodes(t_list *lst)
// {
// 	while (lst != NULL)
// 	{
// 		printf("%d\n", lst->content);
// 		lst = lst->next;
// 	}
// }

// int	main(int argc, char **argv)
// {
// 	t_list	*root;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;

// 	node1 = malloc(sizeof(t_list));
// 	if (!node1)
// 		return (0);
// 	node2 = malloc(sizeof(t_list);
// 	if (!node2)
// 		return (0);
// 	node3 = malloc(sizeof(t_list);
// 	if (!node3)
// 		return (0);

// 	node1->content = (void *)1;
// 	node2->content = (void *)2;
// 	node3->content = (void *)3;
// 	return (0);
// }
