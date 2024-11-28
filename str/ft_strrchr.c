/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergos <jbergos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 23:54:31 by jbergos           #+#    #+#             */
/*   Updated: 2024/11/28 18:05:41 by jbergos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	occ;

	i = 0;
	occ = -1;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			occ = i;
		++i;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	if (occ != -1)
		return ((char *)s + occ);
	return (NULL);
}
