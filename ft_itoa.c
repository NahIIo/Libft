/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchauvet <jchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 14:03:18 by jchauvet          #+#    #+#             */
/*   Updated: 2019/10/28 10:54:48 by jchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	long	size_nbr(long nb)
{
	long	size;

	size = 0;
	while (nb >= 10)
	{
		size++;
		nb /= 10;
	}
	return (size + 1);
}

static	char	*ft_itoa_2(char *res, int i, long nb, long size)
{
	while (nb >= 10)
	{
		res[i--] = (char)(nb % 10 + 48);
		nb /= 10;
	}
	res[size] = '\0';
	res[i] = (char)(nb % 10 + 48);
	return (res);
}

char			*ft_itoa(int n)
{
	long			nb;
	long			size;
	int				i;
	char			*res;

	if (n < 0)
		nb = (long)n * -1;
	else
		nb = (long)n;
	size = size_nbr(nb);
	if (n < 0)
		size++;
	i = 0;
	if (!(res = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	if (n < 0)
		res[i] = '-';
	i = size - 1;
	return (ft_itoa_2(res, i, nb, size));
}
