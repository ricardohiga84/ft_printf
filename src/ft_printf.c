/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:25:10 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/07/20 14:54:49 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "../include/ft_printf.h"

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
			printed_bytes = check_type(str, src, printed_bytes);
		}
		else
			ft_putchar(*str);
		str++;
		printed_bytes++;
	}
	return (printed_bytes);
}
