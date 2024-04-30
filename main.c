/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:57:22 by ryusupov          #+#    #+#             */
/*   Updated: 2024/04/30 11:44:08 by ryusupov         ###   ########.fr       */
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

// int	main(void)
// {
// 	t_list	*list1;
// 	t_list	*list2;
// 	t_list	*list3;
// 	int		result;

// 	list1 = malloc(sizeof(t_list));
// 	list1->content = (void *)2;
// 	list2 = malloc(sizeof(t_list));
// 	list1->next = list2;
// 	list2->content = (void *)1;
// 	list3 = malloc(sizeof(t_list));
// 	list2->next = list3;
// 	list3->content = (void *)3;
// 	list3->next = NULL;
// 	result = ft_lstsize(list1);
// 	printf("%d", result);
// }
