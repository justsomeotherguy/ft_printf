/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:47:54 by jwilliam          #+#    #+#             */
/*   Updated: 2021/10/21 15:25:06 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	ft_printf_char(t_argcont *allargs)
{
	ft_putchar_fd(va_arg(allargs->args, int), 1);
	allargs->counter++;
}
