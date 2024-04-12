/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagranat <eagranat@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:09:35 by eagranat          #+#    #+#             */
/*   Updated: 2024/02/20 11:17:13 by eagranat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total_size;
	size_t			i;
	void			*ptr;
	unsigned char	*byte_ptr;

	i = 0;
	total_size = count * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	byte_ptr = (unsigned char *)ptr;
	while (i < total_size)
	{
		byte_ptr[i] = 0;
		i++;
	}
	return (ptr);
}
