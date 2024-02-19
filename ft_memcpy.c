/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagranat <eagranat@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:36:35 by eagranat          #+#    #+#             */
/*   Updated: 2024/02/19 10:37:47 by eagranat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (!dst && !src)
		return (0);
	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	while (n-- > 0)
		*str1++ = *str2++;
	return (dst);
}
