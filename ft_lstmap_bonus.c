/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagranat <eagranat@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:28:00 by eagranat          #+#    #+#             */
/*   Updated: 2024/02/19 09:47:02 by eagranat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (!lst)
		return (0);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (0);
	temp = new;
	lst = lst->next;
	while (lst)
	{
		temp->next = ft_lstnew(f(lst->content));
		if (!temp->next)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		temp = temp->next;
		lst = lst->next;
	}
	return (new);
}
