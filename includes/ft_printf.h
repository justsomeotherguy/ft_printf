/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:43:58 by jwilliam          #+#    #+#             */
/*   Updated: 2021/10/21 15:40:17 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct s_argcont
{
	va_list		args;
	int			counter;
}	t_argcont;

int			ft_printf(const char *str, ...);

void		ft_printf_char(t_argcont *allargs);

void		ft_printf_str(t_argcont *allargs);

void		ft_printf_int(t_argcont *allargs);

void		ft_printf_uint(t_argcont *allargs);

void		ft_printf_ptr(t_argcont *allargs);

void		ft_printf_hex(int c, t_argcont *allargs);

#endif
