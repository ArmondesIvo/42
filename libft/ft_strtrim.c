/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarmonde <iarmonde@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:39:30 by lmuler-f          #+#    #+#             */
/*   Updated: 2026/02/22 17:04:32 by iarmonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(char c, const char *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		end;
	char	*trim;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (isset(s1[i], set))
		i++;
	while (isset(s1[end - 1], set))
		end--;
	trim = ft_substr(s1, i, end - i);
	return (trim);
}

static int	isset(char c, const char *set)
{
	while (*set && c != *set)
		set++;
	if (c == *set)
		return (1);
	else
		return (0);
}
