/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergos <jbergos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 00:32:09 by jbergos           #+#    #+#             */
/*   Updated: 2024/10/17 00:42:42 by jbergos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*ptrc;

	ptrc = (char *)s;
	i = 0;
	while (i < n)
	{
		if (ptrc[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
