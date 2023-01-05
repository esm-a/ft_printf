/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sublibft.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabkadri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:08:00 by iabkadri          #+#    #+#             */
/*   Updated: 2022/11/01 08:08:04 by iabkadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *cnt)
{
	write(1, &c, 1);
	++*cnt;
}

void	ft_putstr(char *s, int *cnt)
{
	if (s == NULL)
		ft_putstr("(null)", cnt);
	else
		while (*s != '\0')
			ft_putchar(*s++, cnt);
}

void	ft_putnbr(long nbr, int *cnt)
{
	if (nbr < 0)
	{
		ft_putchar('-', cnt);
		nbr *= -1;
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10, cnt);
	ft_putchar(nbr % 10 + '0', cnt);
}
