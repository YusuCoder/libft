/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 10:40:04 by ryusupov          #+#    #+#             */
/*   Updated: 2024/03/17 10:13:21 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *p, int i)
{
	size_t			a;
	unsigned char	c;
	const char		*s;

	s = p;
	a = ft_strlen(p);
	p = (p + a);
	c = (unsigned char)i;
	while ((p != s) && (c != *p))
	{
		p--;
	}
	if (c == *p)
	{
		return ((char *)p);
	}
	return (0);
}
