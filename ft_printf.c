/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:13:38 by frocha-b          #+#    #+#             */
/*   Updated: 2025/04/29 14:13:38 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdarg.h>


static void	print_args(va_list *args, char *format, int i)
{
	if (!ft_strchr("cspdiuxX%", format[i + 1]))
	{
		ft_putstr("invalid format flag");
		return;
	}
	if (format[i + 1] == '%')
		ft_putchar('%');
	if (format[i + 1] == 'c')
		ft_putchar(va_arg(*args, char));
	if (format[i + 1] == 's')
		ft_put_str(va_arg(*args, char *));
	if (format[i + 1] == 'd' || format[i + 1] == 'i')
		ft_put_nbr(va_arg(*args, int));


}
int	ft_printf(const char *format, ...)
{
	int	i;
	int	count;

	i = 0;
	va_list args;
	va_start (args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			print_args(&args, format, i);
			i++;
		}	
		else
			ft_putchar(format[i]);
		i++;
	}
	
}