/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:58:34 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/17 10:44:50 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*		The isalnum() function tests for any character for alphabetic or
		digits is true
*/

int	ft_isalnum(int i)
{
	if (((i >= 48) && (i <= 57)) || ((i >= 65) && (i <= 90)) || ((i >= 97)
			&& (i <= 122)))
	{
		return (i);
	}
	return (0);
}
