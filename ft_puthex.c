/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kneves <kneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 04:09:54 by kneves            #+#    #+#             */
/*   Updated: 2023/11/15 22:52:56 by kneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void	to_char(unsigned long n, int arg, int *count)
{
	const char	*alpha_upp = "0123456789ABCDEF";
	const char	*alpha_low = "0123456789abcdef";
	char		hex;

	if (arg == 'X')
		hex = alpha_upp[n % 16];
	else if (arg == 'x')
		hex = alpha_low[n % 16];
	else if (arg == 'p')
		hex = alpha_low[n % 16];
	write(1, &hex, 1);
	(*count)++;
}

static int	if_pointer(unsigned long d)
{
	if (d == 0)
	{
		ft_putstr("(nil)");
		return (3);
	}
	else
		return (0);
}

int	ft_puthex(unsigned long d, int arg)
{
	int	count;
	int	digits[16];
	int	i;

	count = 0;
	if (d == 0)
	{
		if (arg == 'p')
			return (if_pointer(d));
		to_char(d, arg, &count);
	}
	if (arg == 'p' && d != 0)
		ft_putstr("0x");
	i = 0;
	while (d > 0)
	{
		digits[i++] = d % 16;
		d /= 16;
	}
	while (--i >= 0)
		to_char(digits[i], arg, &count);
	return (count);
}
