/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchauvet <jchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 14:01:57 by jchauvet          #+#    #+#             */
/*   Updated: 2019/10/28 10:44:59 by jchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int			count_words(const char *s, char c)
{
	int	count;
	int i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			while (s[i] != '\0' && s[i] == c)
				i++;
		else if (s[i] != c)
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (count);
}

static	int			get_next_word(const char *s, char c, int i)
{
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

static	int			size_word(const char *s, char c, int i)
{
	int res;

	res = 0;
	while (s[i] && s[i + res] && s[i + res] != c)
		res++;
	return (res);
}

char				**ft_split(char const *s, char c)
{
	char	**tab;
	int		ite[4];

	if (!s || !(tab = malloc(sizeof(char*) * (count_words(s, c) + 1))))
		return (NULL);
	ite[2] = 0;
	ite[0] = 0;
	while (s[ite[0]] && ite[2] < count_words(s, c))
	{
		ite[1] = 0;
		ite[0] = get_next_word(s, c, ite[0]);
		if (!(tab[ite[2]] = malloc(sizeof(char) * size_word(s, c, ite[0]) + 1)))
			return (NULL);
		ite[3] = size_word(s, c, ite[0]);
		while (s[ite[0]] && ite[1] < ite[3])
		{
			tab[ite[2]][ite[1]] = s[ite[0]];
			ite[0]++;
			ite[1]++;
		}
		tab[ite[2]][ite[1]] = '\0';
		ite[2]++;
	}
	tab[ite[2]] = 0;
	return (tab);
}
