/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarmonde <iarmonde@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:47:42 by lmuler-f          #+#    #+#             */
/*   Updated: 2026/02/22 17:04:30 by iarmonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned const char	*ptr;
	unsigned const char	*sptr;

	sptr = (unsigned const char *) s;
	ptr = NULL;
	while (*sptr)
	{
		if (*sptr == (unsigned char) c)
			ptr = &*sptr;
		sptr++;
	}
	if (*sptr == (unsigned char) c)
		ptr = &*sptr;
	return ((char *)ptr);
}
