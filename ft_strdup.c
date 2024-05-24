/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:03:11 by ryusupov          #+#    #+#             */
/*   Updated: 2024/05/24 19:39:02 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	ft_strdup function is used to duplicate a string. It allocates memory for
	the duplicate string, copies the contents of the original string into the
	newly allocated memory, and returns a pointer to the duplicate string
*/

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char *)malloc(ft_strlen(s1) + 1);
	if (!(s2))
	{
		return (NULL);
	}
	ft_memcpy(s2, s1, ft_strlen(s1) + 1);
	return (s2);
}
