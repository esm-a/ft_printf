/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabkadri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:07:23 by iabkadri          #+#    #+#             */
/*   Updated: 2022/11/01 08:07:28 by iabkadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		cnt;

	va_start(ap, format);
	cnt = 0;
	while (*format != '\0')
	{
		if (*format != '%')
			ft_putchar(*format, &cnt);
		else
			ft_handle(*++format, ap, &cnt);
		format++;
	}
	va_end(ap);
	return (cnt);
}
