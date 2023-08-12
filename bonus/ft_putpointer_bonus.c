/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:23:55 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/08/12 16:24:10 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

size_t	ft_putptrhex(unsigned long long num)
{
	size_t	size;
	char	c;

	size = 0;
	if (num / 16 > 0)
	{
		size += ft_putptrhex(num / 16);
	}
	if (num % 16 >= 10)
		c = num % 16 - 10 + 'a';
	else
		c = num % 16 + '0';
	ft_putchar(c);
	size++;
	return (size);
}

size_t	ft_putpointer(unsigned long long num)
{
	size_t	size;

	size = 0;
	if (!num)
	{
		size += ft_putstr("(nil)");
		return (size);
	}
	size += ft_putstr("0x");
	size += ft_putptrhex(num);
	return (size);
}
