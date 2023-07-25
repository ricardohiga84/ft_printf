/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:22:41 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/07/25 16:20:40 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_putchar(char c)
{
	size_t	size;

	size = 0;
	write(1, &c, 1);
	size++;
	return (size);
}
