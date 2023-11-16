/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:17:42 by tchaves           #+#    #+#             */
/*   Updated: 2023/11/15 22:05:03 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

int	ft_printf_fmt(const char *arg, int i, va_list ap);
int	ft_putchar(char c);
int	ft_putunsnbr(unsigned int nb);
int	ft_puthex(unsigned long d, int arg);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);

#endif