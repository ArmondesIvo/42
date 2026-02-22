/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarmonde <iarmonde@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:38:07 by lmuler-f          #+#    #+#             */
/*   Updated: 2026/02/22 17:03:48 by iarmonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char		*p;

	p = (unsigned char *) s;
	while (n > 0)
	{
		*p++ = (unsigned char) c;
		n--;
	}
	return (s);
}
