/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchauvet <jchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 14:01:50 by jchauvet          #+#    #+#             */
/*   Updated: 2019/10/28 10:49:59 by jchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;

	if (!s || !(res = malloc(len + 1)))
		return (NULL);
	i = 0;
	while (i < len && start < ft_strlen(s))
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
