/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarmonde <iarmonde@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:43:40 by lmuler-f          #+#    #+#             */
/*   Updated: 2026/02/22 17:04:15 by iarmonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			i;
	unsigned int	a;
	unsigned int	b;

	i = 0;
	a = ft_strlen(dst);
	b = ft_strlen(src);
	if (a >= size)
		return (b + size);
	while (src[i] && a + i < size - 1)
	{
		dst[i + a] = src[i];
		i++;
	}
	if (a + i < size)
		dst[a + i] = '\0';
	return (a + b);
}
