/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergos <jbergos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 22:46:53 by jbergos           #+#    #+#             */
/*   Updated: 2024/11/28 18:07:35 by jbergos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*tlist;

	tlist = malloc(sizeof(t_list));
	if (!tlist)
		return (NULL);
	tlist->next = NULL;
	tlist->content = content;
	return (tlist);
}
