/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarmonde <iarmonde@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 20:10:40 by lmuler-f          #+#    #+#             */
/*   Updated: 2026/02/22 17:03:39 by iarmonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*st;
	unsigned char	ch;
	size_t			i;

	i = 0;
	st = (unsigned char *)s;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (st[i] == ch)
			return ((void *)&st[i]);
		i++;
	}
	return (NULL);
}
