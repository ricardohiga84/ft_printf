/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_type_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:23:00 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/08/12 16:23:23 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"
#include <stdarg.h>

size_t	check_type(const char *str, va_list src, size_t printed_bytes)
{
	if (*str == 'c')
		printed_bytes += ft_putchar(va_arg(src, int));
	else if (*str == 's')
		printed_bytes += ft_putstr(va_arg(src, char *));
	else if (*str == 'p')
		printed_bytes += ft_putpointer(va_arg(src, unsigned long long));
	else if (*str == 'i' || *str == 'd')
		printed_bytes += ft_putnbr(va_arg(src, int));
	else if (*str == 'u')
		printed_bytes += ft_putnbr_u(va_arg(src, int));
	else if (*str == 'x' || *str == 'X')
		printed_bytes += ft_puthex(va_arg(src, int), *str);
	else if (*str == '%')
		printed_bytes += ft_putchar('%');
	return (printed_bytes);
}
