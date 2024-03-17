/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:25:06 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/17 10:45:07 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	isprint ftunction checks if the given character is printable from A - z */

int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
	{
		return (i);
	}
	return (0);
}
