/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:58:53 by frocha-b          #+#    #+#             */
/*   Updated: 2025/05/13 14:51:52 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);

						/*Parse*/
int		parse_input(const char *format, va_list args, int length);
void	parse_conversions(const char *format, va_list args, int *length);

					/*Helper Functions*/
void	ft_putchar(int c, int	*length);
void	ft_putstr(char *str, int *length);
void	ft_put_nbr(int n, int *length);
void	ft_put_uns(unsigned int n, int *length);
void	ft_put_hex(unsigned long long n, char letter, int *length);
void	ft_put_adr(unsigned long long pointer, int *length);

#endif