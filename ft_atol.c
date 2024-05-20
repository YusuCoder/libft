/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:57:19 by ryusupov          #+#    #+#             */
/*   Updated: 2024/05/20 13:58:23 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	atoi() function converts the initial portion of the string pointed to
     by str to long representation.
*/

int long	ft_atol(const char *str)
{
	int long 	i;
	int			sign;
	int			counter;

	i = 0;
	sign = 1;
	counter = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			sign *= -1;
		counter++;
		if (counter > 1)
			return (0);
		str++;
	}
	while (ft_isdigit(*str))
	{
		i *= 10;
		i += *str - 48;
		str++;
	}
	return (i * sign);
}
