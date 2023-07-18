/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:25:10 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/07/18 18:55:15 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "../include/ft_printf.h"

int	ft_printf(const char *src, ...)
{
	va_list	str;
	int		count;

	va_start(str, src);
	count = 0;
	while (*src)
	{
		if (*src == '%')
		{
			src++;
			if (*src == 'c')
			{
				ft_putchar(va_arg(str, int));
			}
			else if (*src == 's')
			{
				count += ft_putstr(va_arg(str, char *)) - 1;
			}
		}
		else
			ft_putchar(*src);
		src++;
		count++;
	}
	return (count);
}
