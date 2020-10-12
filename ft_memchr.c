/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julian <Julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:21:51 by jchauvet          #+#    #+#             */
/*   Updated: 2019/10/16 15:39:10 by Julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*ptr;

	ptr = s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
