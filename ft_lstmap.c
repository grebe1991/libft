/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrebeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 14:39:23 by vgrebeni          #+#    #+#             */
/*   Updated: 2017/01/18 14:39:25 by vgrebeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*new_list;
	t_list	*last;

	last = ft_lstnew(lst->content, lst->content_size);
	if (!last)
		return (NULL);
	last = (*f)(lst);
	new_list = last;
	while (lst->next)
	{
		lst = lst->next;
		new = ft_lstnew(lst->content, lst->content_size);
		if (!new)
			return (NULL);
		new = (*f)(lst);
		last->next = new;
		last = new;
	}
	return (new_list);
}
