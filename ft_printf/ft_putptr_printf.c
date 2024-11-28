/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergos <jbergos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:36:10 by jbergos           #+#    #+#             */
/*   Updated: 2024/10/24 23:39:21 by jbergos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa_ptr(unsigned long nb, int n)
{
	if (nb >= 16)
	{
		n = (ft_puthexa_ptr(nb / 16, n));
	}
	n += ft_putchar_printf(HEXA[nb % 16]);
	return (n);
}

int	ft_putptr_printf(void *ptr)
{
	int				count;
	unsigned long	nb;

	count = 0;
	if (!ptr)
		return (ft_putstr_printf("(nil)"));
	count += ft_putstr_printf("0x");
	nb = (unsigned long)ptr;
	return (ft_puthexa_ptr(nb, count));
}
