/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:25:10 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/07/24 17:18:39 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "../include/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	src;
	va_list	copy;
	size_t	printed_bytes;

	va_start(src, str);
	printed_bytes = 0;
	va_copy(copy, src);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			printed_bytes = check_type(str, src, printed_bytes);
		}
		else
			ft_putchar(*str);
		str++;
		printed_bytes++;
	}
	va_end(src);
	return (printed_bytes);
}
