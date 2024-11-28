/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergos <jbergos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 05:16:19 by jbergos           #+#    #+#             */
/*   Updated: 2024/11/28 18:04:44 by jbergos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static size_t	ft_leng_int(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		++len;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_int_neg(char *s, int n, size_t len)
{
	size_t	i;

	i = 0;
	s[i++] = '-';
	n = -n;
	while (i < len)
	{
		s[len - i] = (n % 10) + '0';
		n /= 10;
		++i;
	}
	s[i] = '\0';
	return (s);
}

static char	*ft_int_pos(char *s, int n, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		s[len - 1 - i] = (n % 10) + '0';
		n /= 10;
		++i;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	len;

	if (n == -2147483648)
	{
		ptr = malloc(sizeof(char) * (12));
		if (!ptr)
			return (NULL);
		ft_strlcpy(ptr, "-2147483648", 12);
		return (ptr);
	}
	len = ft_leng_int(n);
	ptr = malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	if (n < 0)
		ptr = ft_int_neg(ptr, n, len);
	else
		ptr = ft_int_pos(ptr, n, len);
	return (ptr);
}
/*
int	main(void)
{
	printf("%s\n",ft_itoa(-623));
	printf("%s\n",ft_itoa(156));
	printf("%s\n",ft_itoa(-0));
	return (0);
}*/