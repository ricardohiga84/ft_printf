/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:25:16 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/08/12 16:22:19 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *src, ...);
int		ft_putstr(char *s);
size_t	ft_putchar(char c);
size_t	ft_putnbr(int n);
size_t	ft_putnbr_u(unsigned int n);
size_t	check_type(const char *str, va_list src, size_t printed_bytes);
size_t	ft_puthex(unsigned int n, char x);
size_t	ft_putpointer(unsigned long long num);
size_t	ft_putptrhex(unsigned long long num);

#endif
