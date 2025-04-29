/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:57:30 by frocha-b          #+#    #+#             */
/*   Updated: 2025/04/29 16:57:30 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write (1, %c, 1);
}
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while {str[i]}
	{
		ft_putchar(str[i]);
		i++;
	}
}
void	ft_put_nbr(int n)
{
	char	nbr;

	if (n < 0)
	{
		ft_putchar('-');
		n *=-1;
		if (n == -2147483648)
		{
			ft_putchar('2')
			n = 147483648;
		}
	}
	if (n > 9)
		ft_put_nbr(n / 10);
	nbr = (n % 10) + '0';
	ft_putchar(nbr)	
}		