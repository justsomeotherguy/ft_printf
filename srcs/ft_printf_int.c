/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:48:50 by jwilliam          #+#    #+#             */
/*   Updated: 2021/10/21 15:23:51 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

static int	ft_get_size(int n)
{
	int		size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

void	ft_printf_int(t_argcont *allargs)
{
	int		len;
	int		num;

	num = va_arg(allargs->args, int);
	len = ft_get_size(num);
	ft_putnbr_fd(num, 1);
	allargs->counter = allargs->counter + len;
}
