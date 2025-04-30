/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:29:18 by frocha-b          #+#    #+#             */
/*   Updated: 2025/04/30 15:29:18 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"


void	parse_conversions(const char * format, va_list args, int *length)
{
	if (*format == '%')
		ft_putchar('%', length);
	else if(*format == 'c')
		ft_putchar(va_arg(*args, char));
	else if (*format == 's')
		ft_put_str(va_arg(*args, char *));
	else if (*format == 'd' || format[i + 1] == 'i')
		ft_put_nbr(va_arg(*args, int));
	else if (*format == 'u')
		ft_put_uns(va_args) 
	else if (*format == 'x' || *format == 'X')
		ft_put_hex(va_arg(*args, unsigned int), *format, length);
	else if (*format == 'p')
		ft_put_adr(va_arg(*args, unsigned long long), length);
	else
		ft_putchar(*format, length);
}



int	parse_input(const char *format, va_list args, int length)
{
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			length = parse_conversions(format, args, &length);
			format++;
		}
		else
			ft_putchar(*format++, &length);
	}
	return (length);
}