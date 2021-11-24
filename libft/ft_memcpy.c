/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:49:55 by jwilliam          #+#    #+#             */
/*   Updated: 2021/09/27 11:46:35 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char			*str1;
	char			*str2;
	size_t			index;

	if (!dest && !src)
		return (NULL);
	str1 = (char *)dest;
	str2 = (char *)src;
	index = 0;
	while (index < len)
	{
		str1[index] = str2[index];
		index++;
	}
	return (dest);
}
