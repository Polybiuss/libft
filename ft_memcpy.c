/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergos <jbergos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:51:36 by jbergos           #+#    #+#             */
/*   Updated: 2024/10/16 23:14:13 by jbergos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ptr_dest;
	unsigned char		*ptr_src;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (dest == NULL && src == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		++i;
	}
	return (dest);
}
/*
 #include <stdio.h>
 #include <string.h>
 int main(void)
 {
	printf("%s\n",(char *)ft_memcpy("", "", 1));
	return (0);
 }
 */
