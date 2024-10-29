/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergos <jbergos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 02:17:03 by jbergos           #+#    #+#             */
/*   Updated: 2024/10/20 18:37:47 by jbergos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	if (!*little)
		return ((char *)big);
	i = 0;
	while (big[i] != '\0')
	{
		j = 0;
		while (big[i] == little[j] && big[i] != '\0' && i < len)
		{
			++i;
			++j;
		}
		if (little[j] == '\0')
			return ((char *)big + (i - j));
		i = (i - j) + 1;
	}
	return (NULL);
}
