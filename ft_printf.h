/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aausman <aausman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:57:03 by aausman           #+#    #+#             */
/*   Updated: 2023/11/25 17:24:17 by aausman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_putchr(int c);
int		ft_putstr(char *str);
int		ft_putnbr(int nbr);
int		ft_unsigned_nbr(unsigned int nbr);
int		ft_hex(unsigned long nbr, const char hex_case);
int		ft_pointer(void	*ptr);
int		ft_printf(const	char *str, ...);

#endif
