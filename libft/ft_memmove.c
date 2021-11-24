/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:13:33 by jwilliam          #+#    #+#             */
/*   Updated: 2021/09/27 11:46:59 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char			*str1temp;
	char			*str2temp;
	size_t			index;

	if (!dest && !src)
		return (NULL);
	str1temp = (char *)dest;
	str2temp = (char *)src;
	index = 0;
	if (dest < src)
	{
		while (len > 0)
		{
			str1temp[index] = str2temp[index];
			index++;
			len--;
		}
	}
	else
	{
		index = len;
		while (index--)
			str1temp[index] = str2temp[index];
	}
	return (dest);
}
