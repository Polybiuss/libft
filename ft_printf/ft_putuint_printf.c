/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergos <jbergos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 00:55:53 by jbergos           #+#    #+#             */
/*   Updated: 2024/10/24 22:26:59 by jbergos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuint_printf(int n)
{
	int				i;
	unsigned int	nb;

	i = 0;
	nb = (unsigned int)n;
	if (nb > 9)
		i += ft_putint_printf(nb / 10);
	i += ft_putchar_printf((nb % 10) + '0');
	return (i);
}
