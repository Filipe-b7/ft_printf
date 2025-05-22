/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:13:38 by frocha-b          #+#    #+#             */
/*   Updated: 2025/05/13 15:15:02 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		length;
	va_list	args;

	length = 0;
	va_start (args, format);
	length = parse_input(format, args, length);
	va_end (args);
	return (length);
}

/* 
#include <stdio.h>

int main (void)
{
	//ft_printf("%i",ft_printf(" NULL %s NULL ", NULL));
	write(1, "\n", 1);
	printf("%i",printf(" NULL %s NULL ", NULL));
	return (0);
}
#include <stdio.h>

int main (void)
{
	//ft_printf("%i",ft_printf(" NULL %s NULL ", NULL));
	write(1, "\n", 1);
	printf("%i",printf(" NULL %s NULL ", NULL));
	return (0);
}

 */
