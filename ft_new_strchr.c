/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_strchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:05:25 by ryusupov          #+#    #+#             */
/*   Updated: 2024/07/09 13:14:00 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr2(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			while (str[i])
			{
				write(1, &str[i], 1);
				i++;
			}
		}
		i++;
	}
	return (char *)str;
}

// int main(void)
// {
// 	char str1[] = "Users/ryusupov";
// 	char str2[] = "/";

// 	char *result = ft_strchr2(str1, str2[0]);
// }
