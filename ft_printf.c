/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aausman <aausman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:59:04 by aausman           #+#    #+#             */
/*   Updated: 2023/11/26 14:53:59 by aausman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_check(va_list args, const char format)
{
	if (format == 'c')
		return (ft_putchr(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_unsigned_nbr(va_arg(args, unsigned int)));
	else if (format == 'p')
		return (ft_pointer(va_arg(args, void *)));
	else if (format == 'x' || format == 'X')
		return (ft_hex(va_arg(args, unsigned int), format));
	else if (format == '%')
		return (ft_putchr('%'));
	else
		return (write(1, &format, 1));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start(args, str);
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
			count += ft_print_check(args, str[++i]);
		else
			count += ft_putchr(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}

