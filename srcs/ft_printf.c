/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:15:08 by jwilliam          #+#    #+#             */
/*   Updated: 2021/10/21 16:11:54 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

static void	handle_type(const char c, t_argcont *allargs)
{
	if (c == 'c')
		ft_printf_char(allargs);
	else if (c == 's')
		ft_printf_str(allargs);
	else if (c == 'p')
		ft_printf_ptr(allargs);
	else if (c == 'd' || c == 'i')
		ft_printf_int(allargs);
	else if (c == 'u')
		ft_printf_uint(allargs);
	else if (c == 'x' || c == 'X')
		ft_printf_hex(c, allargs);
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
		allargs->counter++;
	}
}

static t_argcont	*ft_initargs(void)
{
	t_argcont		*allargs;

	allargs = (t_argcont *)malloc(sizeof(t_argcont));
	if (!allargs)
		return (NULL);
	allargs->counter = 0;
	return (allargs);
}

int	ft_printf(const char *str, ...)
{
	int				index;
	int				print_count;
	t_argcont		*allargs;

	index = 0;
	print_count = 0;
	allargs = ft_initargs();
	va_start(allargs->args, str);
	while (str[index] != '\0')
	{
		if (str[index] == '%')
			handle_type(str[++index], allargs);
		else
		{
			allargs->counter++;
			ft_putchar_fd(str[index], 1);
		}
		index++;
	}
	print_count = allargs->counter;
	va_end(allargs->args);
	free(allargs);
	return (print_count);
}
