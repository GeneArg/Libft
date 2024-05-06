/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez-a <bperez-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 09:30:23 by bperez-a          #+#    #+#             */
/*   Updated: 2024/05/06 09:32:05 by bperez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_copy_array(char **array)
{
	int		len;
	char	**new_array;

	len = 0;
	if (array)
	{
		while (array[len])
			len++;
	}
	new_array = (char **)malloc(sizeof(char *) * (len + 1));
	for (int i = 0; i < len; i++)
		new_array[i] = ft_strdup(array[i]);
	new_array[len] = NULL;
	return (new_array);
}