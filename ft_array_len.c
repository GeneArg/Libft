/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez-a <bperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:37:23 by eagranat          #+#    #+#             */
/*   Updated: 2024/05/06 09:31:13 by bperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_array_len(char **array)
{
	size_t	i;

	if (!array)
		return (0);
	if (!*array)
		return (0);
	i = 0;
	while (array[i])
		i++;
	return (i);
}