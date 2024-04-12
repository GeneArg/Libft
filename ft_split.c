/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagranat <eagranat@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:36:43 by eagranat          #+#    #+#             */
/*   Updated: 2024/02/20 10:48:15 by eagranat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_toklen(char const *s, char c)
{
	size_t	ret;

	ret = 0;
	while (*s)
	{
		if (*s != c)
		{
			++ret;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (ret);
}

static int	check_ret(char **ret, size_t index)
{
	if (!ret || !ret[index - 1])
	{
		while (index > 0)
		{
			free(ret[--index]);
		}
		free(ret);
		return (1);
	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	len;

	i = 0;
	ret = malloc(sizeof(char *) * (ft_toklen(s, c) + 1));
	if (!ret || !s)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			ret[i++] = ft_substr(s - len, 0, len);
			if (check_ret(ret, i))
				return (NULL);
		}
		else
			++s;
	}
	ret[i] = 0;
	return (ret);
}
