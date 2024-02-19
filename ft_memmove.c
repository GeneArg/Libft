/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagranat <eagranat@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:38:24 by eagranat          #+#    #+#             */
/*   Updated: 2024/02/19 10:39:35 by eagranat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (!dst && !src)
		return (0);
	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	if (str2 < str1)
	{
		str1 += len;
		str2 += len;
		while (len-- > 0)
			*--str1 = *--str2;
	}
	else
	{
		while (len-- > 0)
			*str1++ = *str2++;
	}
	return (dst);
}
