/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchauvet <jchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:35:13 by jchauvet          #+#    #+#             */
/*   Updated: 2019/10/27 14:14:39 by jchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (src < dst)
	{
		while ((len) > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	else
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	return (d);
}
