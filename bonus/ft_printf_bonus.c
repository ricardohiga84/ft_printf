/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:25:10 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/07/25 20:53:51 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h> //apagarrr!!


int	ft_printf(const char *str, ...)
{
	va_list	src;
	va_list	list_copy;
	size_t	printed_bytes;
	char	is_flag;

	va_start(src, str);
	va_copy(list_copy, src);
	is_flag = 'n';
	printed_bytes = 0;
	while (*str)
	{
		if (*str == '%' || is_flag == 'y')
		{
			str++;
			if (*str == '#')
			{
				is_flag = 'y';
				printed_bytes += ft_putstr("0x");
			}
			str++;
			printed_bytes = check_type(str, src, printed_bytes);
		}
		else
		{
			is_flag = 'n';
			printed_bytes += ft_putchar(*str);
		}
		str++;
	}
	va_end(src);
	printf("\nprinted_bytes: %zu\n\n", printed_bytes);
	return (printed_bytes);
}
