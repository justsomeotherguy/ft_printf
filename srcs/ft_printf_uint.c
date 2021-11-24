/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:48:50 by jwilliam          #+#    #+#             */
/*   Updated: 2021/10/22 14:35:38 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

static void	ft_putunbr(unsigned int n, int fd, t_argcont *allargs)
{
	char	c;

	if (n < 10)
	{
		c = n + '0';
		write(fd, &c, 1);
		allargs->counter++;
	}
	else
	{
		ft_putunbr(n / 10, fd, allargs);
		c = (n % 10) + '0';
		write(fd, &c, 1);
		allargs->counter++;
	}	
}

void	ft_printf_uint(t_argcont *allargs)
{
	unsigned int		num;

	num = va_arg(allargs->args, unsigned int);
	ft_putunbr(num, 1, allargs);
}
