/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aausman <aausman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:08:00 by aausman           #+#    #+#             */
/*   Updated: 2023/11/25 21:44:07 by aausman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned long nbr, const char hex_case)
{
	int		count;
	char	*base_lower;
	char	*base_upper;

	base_lower = "0123456789abcdef";
	base_upper = "0123456789ABCDEF";
	count = 0;
	if (nbr >= 16)
	{
		count += ft_hex(nbr / 16, hex_case);
		count += ft_hex(nbr % 16, hex_case);
	}
	else
	{
		if (hex_case == 'x')
			count += ft_putchr(base_lower[nbr]);
		else
			count += ft_putchr(base_upper[nbr]);
	}
	return (count);
}
