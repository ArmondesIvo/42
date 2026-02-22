/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarmonde <iarmonde@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:16:46 by lmuler-f          #+#    #+#             */
/*   Updated: 2026/02/22 17:03:12 by iarmonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int nbr);

char	*ft_itoa(int n)
{
	int			len;
	long		num;
	char		*result;

	num = n;
	len = numlen(num);
	result = (char *)ft_calloc((len + 1), sizeof(char));
	if (!result)
		return (NULL);
	if (num < 0)
	{
		result[0] = '-';
		num = -num;
	}
	while (--len >= 0 && result[len] != '-')
	{
		result[len] = (num % 10) + '0';
		num /= 10;
	}
	return (result);
}

static int	numlen(int nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}
