/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchauvet <jchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 14:02:19 by jchauvet          #+#    #+#             */
/*   Updated: 2019/10/28 10:45:37 by jchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	unsigned int		char_in_set(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char						*ft_strtrim(char const *s1, char const *set)
{
	int				i;
	unsigned int	size;
	char			*ind_start;
	char			*ind_end;
	char			*res;

	if (!s1)
		return (NULL);
	i = 0;
	while (s1[i] && char_in_set(s1[i], set))
		i++;
	ind_start = (char*)s1 + i;
	if ((i = ft_strlen(s1) - 1) != -1)
		while (i >= 0 && char_in_set(s1[i], set))
			i--;
	ind_end = (char*)s1 + i;
	if (ind_end == ind_start)
		size = 2;
	else
		size = ind_end - ind_start + 2;
	if (!(res = malloc(sizeof(char) * size)))
		return (NULL);
	ft_strlcpy(res, ind_start, size);
	return (res);
}
