/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergos <jbergos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 01:08:49 by jbergos           #+#    #+#             */
/*   Updated: 2024/10/17 06:05:04 by jbergos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	len_s;

	len_s = ft_strlen(s);
	if (!len_s || len_s < start)
		return (ft_strdup(""));
	if (len_s - start < len)
		len = len_s - start;
	ptr = malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}
/*
#include <stdio.h>
int main(void)
{
	char str[] = "Hello World!";
	char *ptr;

	ptr = ft_substr(str, 20, ft_strlen(str));
	printf("%s\n", ptr);
	return (0); 
}*/