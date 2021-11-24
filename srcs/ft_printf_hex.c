/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:48:46 by jwilliam          #+#    #+#             */
/*   Updated: 2021/10/22 14:40:51 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

static void	ft_writehex(char *str, unsigned int num, t_argcont *allargs)
{
	if (num >= 16)
		ft_writehex(str, (num / 16), allargs);
	ft_putchar_fd(str[num % 16], 1);
	allargs->counter++;
}

void	ft_printf_hex(int c, t_argcont *allargs)
{
	char			*upper;
	char			*lower;
	unsigned int	num;

	num = va_arg(allargs->args, unsigned int);
	upper = "0123456789ABCDEF";
	lower = "0123456789abcdef";
	if (c == 'x')
		ft_writehex(lower, num, allargs);
	else if (c == 'X')
		ft_writehex(upper, num, allargs);
}
