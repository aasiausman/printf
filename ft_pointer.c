/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aausman <aausman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:07:54 by aausman           #+#    #+#             */
/*   Updated: 2023/11/26 16:00:30 by aausman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(void *ptr)
{
	int				counter;
	unsigned long	nbr;

	nbr = (unsigned long)ptr;
	counter = 0;
	if (nbr == 0)
	{
		write(1, "0x0", 3);
		return (3);
	}
	write(1, "0x", 2);
	counter += 2;
	counter += ft_hex(nbr, 'x');
	return (counter);
}

#include <stdio.h>
int main()
{
	char *ptr;
	printf("%d\n", ft_pointer(NULL));
	printf("%p\n", NULL);
}