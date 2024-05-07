/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:21:13 by ryusupov          #+#    #+#             */
/*   Updated: 2024/05/04 20:39:09 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_ryusupov **lst, t_ryusupov *new)
{
	if (!new)
	{
		return ;
	}
	new->next = *lst;
	*lst = new;
}

// void	print_nodes(t_ryusupov *lst)
// {
// 	while (lst != NULL)
// 	{
// 		printf("%d\n", lst->content);
// 		lst = lst->next;
// 	}
// }

// int	main(int argc, char **argv)
// {
// 	t_ryusupov	*root;
// 	t_ryusupov	*node1;
// 	t_ryusupov	*node2;
// 	t_ryusupov	*node3;

// 	node1 = malloc(sizeof(t_ryusupov));
// 	if (!node1)
// 		return (0);
// 	node2 = malloc(sizeof(t_ryusupov);
// 	if (!node2)
// 		return (0);
// 	node3 = malloc(sizeof(t_ryusupov);
// 	if (!node3)
// 		return (0);

// 	node1->content = (void *)1;
// 	node2->content = (void *)2;
// 	node3->content = (void *)3;
// 	return (0);
// }
