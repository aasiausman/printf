/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aausman <aausman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:07:35 by aausman           #+#    #+#             */
/*   Updated: 2023/11/26 13:12:14 by aausman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	int	counter;

	counter = 0;
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nbr < 0)
	{
		ft_putchr('-');
		nbr *= -1;
		counter++;
	}
	if (nbr > 9)
		counter += ft_putnbr(nbr / 10);
	ft_putchr(nbr % 10 + '0');
	counter++;
	return (counter);
}
