/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:23:00 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/07/20 19:17:06 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdarg.h>
#include <stdio.h> //APAGARRRR!!!!

size_t	check_type(const char *str, va_list src, size_t printed_bytes)
{
	if (*str == 'c')
		ft_putchar(va_arg(src, int));
	else if (*str == 's')
		printed_bytes += ft_putstr(va_arg(src, char *)) - 1;
	else if (*str == 'p')
		printed_bytes += ft_putnbr(va_arg(src, int)) - 1;
	else if (*str == 'i' || *str == 'd')
		printed_bytes += ft_putnbr(va_arg(src, int)) - 1;
	else if (*str == 'u')
		printed_bytes += ft_putnbr_u(va_arg(src, int)) - 1;
	else if (*str == 'x')
		printed_bytes += ft_puthex(va_arg(src, int));
	return (printed_bytes);
}
