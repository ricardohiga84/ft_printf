/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:59:54 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/08/12 16:23:43 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

size_t	ft_puthex(unsigned int num, char x)
{
	size_t	size;
	char	c;

	size = 0;
	if (num / 16 > 0)
	{
		size += ft_puthex(num / 16, x);
	}
	if (num % 16 >= 10)
	{
		if (x == 'x')
			c = num % 16 - 10 + 'a';
		else
			c = num % 16 - 10 + 'A';
	}
	else
		c = num % 16 + '0';
	size += ft_putchar(c);
	return (size);
}
