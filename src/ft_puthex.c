/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:59:54 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/07/20 19:25:27 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h> //APAGARRRR!!!

size_t	ft_puthex(int num)
{
	// long	num;
	size_t	size;
	char	c;

	// num = n;
	size = 0;
	if (num / 16 > 0)
	{
		size += ft_puthex(num / 16);
	}
	if (num % 16 >= 10)
		c = num % 16 + 39 + '0';
	else
		c = num % 16 + '0';
	ft_putchar(c);
	size++;
	printf("size: %zu", size);
	return (size);
}
