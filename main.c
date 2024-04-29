/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:57:22 by ryusupov          #+#    #+#             */
/*   Updated: 2024/04/28 17:14:19 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// int	main(void)
// {
// 	t_list	*head;
// 	int		is_sorted;
// 	t_list	*temp;

// 	head = (t_list *)malloc(sizeof(t_list));
// 	head->content = 2;
// 	head->next = (t_list *)malloc(sizeof(t_list));
// 	head->next->content = 1;
// 	head->next->next = (t_list *)malloc(sizeof(t_list));
// 	head->next->next->content = 3;
// 	head->next->next->next = NULL;
// 	is_sorted = list_sorted(head);
// 	if (is_sorted)
// 	{
// 		printf("The list is sorted.\n");
// 	}
// 	else
// 	{
// 		printf("The list is not sorted.\n");
// 	}
// 	while (head != NULL)
// 	{
// 		temp = head;
// 		head = head->next;
// 		free(temp);
// 	}
// 	return (0);
// }

// int	main(void)
// {
// 	int		data1;
// 	int		data2;
// 	int		data3;
// 	t_list	*head;
// 	t_list	*temp;

// 	data1 = 10;
// 	data2 = 20;
// 	data3 = 30;
// 	head = ft_lstnew(&data1);
// 	ft_lstadd_back(&head, ft_lstnew(&data2));
// 	ft_lstadd_back(&head, ft_lstnew(&data3));
// 	printf("Original list:\n");
// 	temp = head;
// 	while (temp)
// 	{
// 		printf("%d ", *((int *)temp->content));
// 		temp = temp->next;
// 	}
// 	printf("\n");
// 	ft_lstclear(&head, free);
// 	printf("List after clearing:\n");
// 	if (head == NULL)
// 	{
// 		printf("List is empty.\n");
// 	}
// 	else
// 	{
// 		printf("Error: List is not empty after clearing.\n");
// 	}
// 	return (0);
// }
