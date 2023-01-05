/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabkadri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:07:36 by iabkadri          #+#    #+#             */
/*   Updated: 2022/11/01 08:07:37 by iabkadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_handle(char spc, va_list ap, int *cnt);
void	ft_putchar(char c, int *cnt);
void	ft_putstr(char *s, int *cnt);
void	ft_putnbr(long nbr, int *cnt);

#endif
