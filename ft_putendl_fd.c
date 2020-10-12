/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchauvet <jchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 14:02:02 by jchauvet          #+#    #+#             */
/*   Updated: 2019/10/27 13:57:10 by jchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		ft_putchar_fd('\n', fd);
	else
	{
		ft_putstr_fd((char *)s, fd);
		ft_putchar_fd('\n', fd);
	}
}
