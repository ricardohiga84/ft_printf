/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:25:10 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/08/12 16:22:53 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

size_t	check_flag(const char *str, va_list src, size_t printed_bytes)
{
	va_list	list_copy;

	va_copy(list_copy, src);
	if (*str == '#' && va_arg(list_copy, int) != 0)
	{
		if (*(str + 1) == 'x')
			printed_bytes += ft_putstr("0x");
		else if (*(str + 1) == 'X')
			printed_bytes += ft_putstr("0X");
	}
	else if (*str == ' ' && *(str + 1) == 'd')
		printed_bytes += ft_putchar(' ');
	return (printed_bytes);
}

int	ft_printf(const char *str, ...)
{
	va_list	src;
	size_t	printed_bytes;

	va_start(src, str);
	printed_bytes = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '#' || *str == ' ' || *str == '+')
				printed_bytes = check_flag(str, src, printed_bytes);
			str++;
			printed_bytes = check_type(str, src, printed_bytes);
		}
		else
			printed_bytes += ft_putchar(*str);
		str++;
	}
	va_end(src);
	return (printed_bytes);
}
