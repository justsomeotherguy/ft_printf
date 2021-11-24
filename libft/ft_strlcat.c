/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:55:10 by jwilliam          #+#    #+#             */
/*   Updated: 2021/09/16 15:50:54 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t		destlen;
	size_t		srclen;
	size_t		indexa;
	size_t		indexb;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	indexa = destlen;
	indexb = 0;
	if (len == 0)
		return (srclen);
	if (len < destlen + 1)
		return (srclen + len);
	if (len > destlen + 1)
	{
		while (src[indexb] != '\0' && (indexa < len - 1))
		{
			dest[indexa] = src[indexb];
			indexa++;
			indexb++;
		}
		dest[indexa] = '\0';
	}
	return (destlen + srclen);
}
