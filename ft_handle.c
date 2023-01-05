/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabkadri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:07:50 by iabkadri          #+#    #+#             */
/*   Updated: 2022/11/01 08:07:52 by iabkadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putinteger(char spc, int i_val, int *cnt);
static void	ft_putaddress(unsigned long address, int *cnt);
static void	ft_putbase(unsigned long nbr, char *base, int *cnt);

void	ft_handle(char spc, va_list ap, int *cnt)
{
	if (spc == 'c' || spc == 'd' || spc == 'i')
		ft_putinteger(spc, va_arg(ap, int), cnt);
	else if (spc == 'u')
		ft_putnbr((unsigned int)va_arg(ap, int), cnt);
	else if (spc == 'p')
		ft_putaddress((unsigned long)va_arg(ap, void *), cnt);
	else if (spc == 'x')
		ft_putbase(va_arg(ap, unsigned int), "0123456789abcdef", cnt);
	else if (spc == 'X')
		ft_putbase(va_arg(ap, unsigned int), "0123456789ABCDEF", cnt);
	else if (spc == 's')
		ft_putstr(va_arg(ap, char *), cnt);
	else
		ft_putchar(spc, cnt);
}

static void	ft_putinteger(char spc, int i_val, int *cnt)
{
	if (spc == 'c')
		ft_putchar(i_val, cnt);
	else
		ft_putnbr(i_val, cnt);
}

static void	ft_putaddress(unsigned long address, int *cnt)
{
	ft_putstr("0x", cnt);
	ft_putbase(address, "0123456789abcdef", cnt);
}

static void	ft_putbase(unsigned long nbr, char *base, int *cnt)
{
	if (nbr >= 16)
		ft_putbase(nbr / 16, base, cnt);
	ft_putchar(base[nbr % 16], cnt);
}
