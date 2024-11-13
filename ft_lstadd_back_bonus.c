/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergos <jbergos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 23:43:39 by jbergos           #+#    #+#             */
/*   Updated: 2024/10/19 02:19:29 by jbergos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **list, t_list *new)
{
	if (!*list)
		return (ft_lstadd_front(list, new));
	ft_lstlast(*list)->next = new;
}
