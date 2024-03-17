/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:17:21 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/17 14:14:01 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	ft_bzero effectively sets all bytes in the memory block to zero by
	iteratively assigning the null terminator to each byte.
*/

void	ft_bzero(void *p, size_t n)
{
	unsigned char	*i;
	size_t			a;

	i = p;
	a = 0;
	while (a < n)
	{
		i[a] = '\0';
		a++;
	}
}
