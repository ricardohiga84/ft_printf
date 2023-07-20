/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshimi <ryoshimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:25:16 by ryoshimi          #+#    #+#             */
/*   Updated: 2023/07/20 17:14:42 by ryoshimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *src, ...);
void	ft_putchar(char c);
int		ft_putstr(char *s);
size_t	ft_putnbr(int n);
size_t	ft_putnbr_u(unsigned int n);
size_t	check_type(const char *str, va_list src, size_t printed_bytes);
size_t	ft_puthex(int n);
char	*ft_itoa(int n);

#endif
