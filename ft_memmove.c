/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergos <jbergos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:57:38 by jbergos           #+#    #+#             */
/*   Updated: 2024/10/17 01:07:19 by jbergos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptrsrc;
	unsigned char	*ptrdest;

	i = 0;
	ptrsrc = (unsigned char *)src;
	ptrdest = (unsigned char *)dest;
	if (ptrsrc > ptrdest)
	{
		while (i < n)
		{
			ptrdest[i] = ptrsrc[i];
			++i;
		}
	}
	else if (ptrsrc < ptrdest)
	{
		while (n)
		{
			ptrdest[n - 1] = ptrsrc[n -1];
			--n;
		}
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char str[] = "Bonjour";
	char *ptr;
	ptr = (char *)memmove(str + 2, str, 3);
	if (ptr != NULL)
		printf("%s\n", ptr);
	else
		printf("NULL\n");
	char str1[] = "Bonjour";
	char *ptr1;
	ptr1 = (char *)ft_memmove(str1 + 2, str1, 3);
	if (ptr1 != NULL)
		printf("%s\n", ptr1);
	else
		printf("NULL\n");
}
*/