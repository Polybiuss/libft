/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergos <jbergos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 02:35:42 by jbergos           #+#    #+#             */
/*   Updated: 2024/10/19 03:03:57 by jbergos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*first;

	first = NULL;
	while (lst)
	{
		new = ft_lstnew(NULL);
		if (!new)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		new->content = f(lst->content);
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}
