/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                 		    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:57:30 by frocha-b          #+#    #+#             */
/*   Updated: 2025/04/29 16:57:30 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(int c, int	*length)
{
	write (1, &c, 1);
	(*length)++;
}

void	ft_putstr(char *str, int *length)
{
	if (!str)
	{
		write(1, "(null)", 6);
		*length += 6;
		return ;
	}
	while (*str)
	{
		ft_putchar(*str, length);
		str++;
	}
}

void	ft_put_nbr(int n, int *length)
{
	if (n < 0)
	{
		ft_putchar('-', length);
		n = -n;
		if (n == -2147483648)
		{
			ft_putchar('2', length);
			n = 147483648;
		}
	}
	if (n < 10)
		ft_putchar(n + '0', length);
	else
	{
		ft_put_nbr(n / 10, length);
		ft_put_nbr(n % 10, length);
	}
}

void	ft_put_uns(unsigned int n, int *length)
{
	if (n < 10)
		ft_putchar(n + '0', length);
	else
	{
		ft_put_uns(n / 10, length);
		ft_put_uns(n % 10, length);
	}
}
