/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:51:49 by frocha-b          #+#    #+#             */
/*   Updated: 2025/04/30 16:51:49 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_put_hex(unsigned long long n, char case,int *length)
{
	char *base;

	if (case == 'x' || case  == 'p')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
		ft_put_hex(n / 16, case, length);
	ft_put_char(base[(n % 16)], length);
}

void ft_put_adr(unsigned long long address, int *length)
{
	ft_put_str("0x", length);
	ft_put_hex(address, 'p', length);
}
