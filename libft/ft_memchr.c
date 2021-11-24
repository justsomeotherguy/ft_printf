/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:07:29 by jwilliam          #+#    #+#             */
/*   Updated: 2021/10/01 11:58:47 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memchr(const void *str, int c, size_t len)
{
	size_t		index;

	index = 0;
	while (index < len)
	{
		if (*(unsigned char *)(str + index) == (unsigned char)c)
			return ((void *)(str + index));
		index++;
	}
	return (NULL);
}
