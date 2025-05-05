/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:51:49 by frocha-b          #+#    #+#             */
/*   Updated: 2025/05/05 17:52:47 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_hex(unsigned long long n, char letter, int *length)
{
	char	*base;

	if (letter == 'x' || letter == 'p')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
		ft_put_hex(n / 16, letter, length);
	ft_putchar(base[(n % 16)], length);
}

void	ft_put_adr(unsigned long long pointer, int *length)
{
	if (!pointer)
	{
		ft_putstr("(nil)", length);
		return ;
	}
	ft_putstr("0x", length);
	ft_put_hex(pointer, 'p', length);
}
