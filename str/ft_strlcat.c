/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergos <jbergos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 22:58:38 by jbergos           #+#    #+#             */
/*   Updated: 2024/11/28 18:05:17 by jbergos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	i_dest;
	size_t	i_src;

	i = 0;
	i_dest = ft_strlen(dst);
	i_src = ft_strlen(src);
	if (size <= i_dest)
		return (size + i_src);
	j = i_dest;
	while (src[i] != '\0' && i < (size - i_dest - 1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (i_dest + i_src);
}
