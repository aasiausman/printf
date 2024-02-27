/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_nbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aausman <aausman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:06:38 by aausman           #+#    #+#             */
/*   Updated: 2023/11/26 12:33:28 by aausman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_nbr(unsigned int nbr)
{
	int	counter;

	counter = 0;
	if (nbr > 9)
		counter += ft_putnbr(nbr / 10);
	ft_putchr(nbr % 10 + '0');
	counter++;
	return (counter);
}
