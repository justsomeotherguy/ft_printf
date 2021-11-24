/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:48:51 by jwilliam          #+#    #+#             */
/*   Updated: 2021/10/22 14:16:01 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

static void	ft_writehex(char *hex, unsigned long num, t_argcont *allargs)
{
	if (num >= 16)
		ft_writehex(hex, (num / 16), allargs);
	ft_putchar_fd(hex[num % 16], 1);
	allargs->counter++;
}

void	ft_printf_ptr(t_argcont *allargs)
{
	unsigned long		num;
	char				*hex;

	hex = "0123456789abcdef";
	ft_putstr_fd("0x", 1);
	allargs->counter = allargs->counter + 2;
	num = va_arg(allargs->args, unsigned long);
	ft_writehex(hex, num, allargs);
}
