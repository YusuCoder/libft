/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:52:56 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/17 10:44:37 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	isdigit function tests if the given character is digit or not	*/

int	ft_isdigit(int i)
{
	if (i >= 48 && i <= 57)
	{
		return (i);
	}
	return (0);
}
