/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:13:38 by frocha-b          #+#    #+#             */
/*   Updated: 2025/05/05 17:43:51 by frocha-b         ###   ########.fr       */
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

int main ()
{
	char	*a = "";
	char	**joao = &a;
	ft_printf("%i",ft_printf("o joao +e %p\n", joao));
	write(1, "\n", 1);
	printf("%i",printf("o joao +e %p\n", joao));
	return (0);
}*/