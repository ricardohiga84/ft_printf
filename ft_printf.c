/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:25:10 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/08/18 15:09:40 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
			printed_bytes += ft_putchar(*str);
		str++;
	}
	va_end(src);
	return (printed_bytes);
}
