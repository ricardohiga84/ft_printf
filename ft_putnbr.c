/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:32:48 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/08/12 16:25:20 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr(int n)
{
	long	num;
	size_t	size;

	num = n;
	size = 0;
	if (num < 0)
	{
		size += ft_putchar('-');
		num = num * -1;
	}
	if (num / 10 > 0)
		size += ft_putnbr(num / 10);
	size += ft_putchar(num % 10 + '0');
	return (size);
}

size_t	ft_putnbr_u(unsigned int n)
{
	unsigned long	num;
	size_t			size;

	num = n;
	size = 0;
	if (num / 10 > 0)
		size += ft_putnbr_u(num / 10);
	size += ft_putchar(num % 10 + '0');
	return (size);
}
