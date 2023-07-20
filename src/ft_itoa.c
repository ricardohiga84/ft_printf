/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:09:58 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/07/20 17:11:50 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	count_digits(int n)
{
	int	count;

	count = 1;
	while ((n / 10) != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*c;
	int		digit;
	long	number;

	digit = count_digits(n);
	if (n < 0)
		c = malloc(digit + 2 * sizeof(char));
	else
		c = malloc(digit + 1 * sizeof(char));
	if (!c)
		return (NULL);
	number = n;
	if (n < 0)
		number *= -1;
	else
		digit--;
	while (digit >= 0)
	{
		c[digit] = (number % 10) + '0';
		number = number / 10;
		digit--;
	}
	if (n < 0)
		c[0] = '-';
	return (c);
}
