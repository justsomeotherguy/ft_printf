/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:35:22 by jwilliam          #+#    #+#             */
/*   Updated: 2021/09/13 15:20:15 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_bzero(void *str, size_t len)
{
	char			*ptr;
	size_t			index;

	index = 0;
	ptr = str;
	while (index < len)
	{
		ptr[index] = '\0';
		index++;
	}
}
