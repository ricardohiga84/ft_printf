/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:59:54 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/07/24 18:08:28 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h> //APAGARRRR!!!

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
			c = num % 16 + 39 + '0';
		else
			c = num % 16 + 7 + '0';
	}
	else
		c = num % 16 + '0';
	ft_putchar(c);
	size++;
	return (size);
}
