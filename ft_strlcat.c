/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchauvet <jchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:48:55 by jchauvet          #+#    #+#             */
/*   Updated: 2019/10/27 14:01:48 by jchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	while (dst[i])
		i++;
	if ((i + 1) == dstsize)
		return (ft_strlen(dst) + ft_strlen(src));
	while (src[j] && (i + j) <= (dstsize - 2))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	if (src[j])
		return (ft_strlen(src) + ft_strlen(dst) - j);
	return (ft_strlen(src) + ft_strlen(dst) - j);
}
