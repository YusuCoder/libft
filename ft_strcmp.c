/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:16:30 by ryusupov          #+#    #+#             */
/*   Updated: 2024/04/29 17:19:01 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	int	i;
	int	a;

	i = 0;
	while (str1[i])
	{
		a = 0;
		while (str2[a])
		{
			if (str1[i] == str2[a])
				return (str2[i] - str2[a]);
			a++;
		}
		i++;
	}
	return (0);
}

//  int	ft_new_strcmp(const char *str1, const char *str2)
// {
// 	int	i;
// 	int	a;

// 	i = 0;
// 	a = 0;
// 	if (str1[i] == '+')
// 	{
// 		a = 0;
// 		if (str2[a] != '+')
// 			i++;
// 	}
// 	else
// 	{
// 		if (str2[a] == '+')
// 			i++;
// 	}
// 	while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[a])
// 	{
// 		i++;
// 		a++;
// 	}
// 	return ((unsigned char)str1[i] - (unsigned char)str2[a]);
// }
