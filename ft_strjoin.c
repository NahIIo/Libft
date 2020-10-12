/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchauvet <jchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 14:02:10 by jchauvet          #+#    #+#             */
/*   Updated: 2019/10/28 10:45:14 by jchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	malloc_size(const char *s1, const char *s2)
{
	size_t	size;
	size_t	i;

	size = 0;
	i = 0;
	while (s1[i])
	{
		i++;
		size++;
	}
	i = 0;
	while (s2[i])
	{
		i++;
		size++;
	}
	return (size);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;
	size_t	j;

	if (!s1 || !s2 || !(res = malloc(malloc_size(s1, s2) + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		res[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		res[j] = s2[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}
