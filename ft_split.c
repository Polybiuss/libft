/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergos <jbergos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 22:23:19 by jbergos           #+#    #+#             */
/*   Updated: 2024/10/19 03:09:36 by jbergos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_worlds(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			++i;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			++i;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char	**pptr;
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	end;

	len = ft_count_worlds(s, c);
	pptr = malloc(sizeof(char *) * (len + 1));
	if (!pptr)
		return (NULL);
	i = 0;
	j = 0;
	while (j < len)
	{
		while (s[i] && s[i] == c)
			++i;
		end = 0;
		while (s[i + end] != '\0' && s[i + end] != c)
			++end;
		pptr[j++] = ft_substr(s + i, 0, end);
		while (s[i] && s[i] != c)
			++i;
	}
	pptr[j] = NULL;
	return (pptr);
}
/*
#include<stdio.h>
int main(int argc, char *argv[])
{
	if ( argc == 3)
	{
		char	**pptr;
		size_t	i;
		pptr = ft_split(argv[1], argv[2][0]);
		i = 0;

		while (pptr[i])
		{
			printf("%s\n", pptr[i]);
			++i;
		}
	}
	return (0);
}*/