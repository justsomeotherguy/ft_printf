/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:43:23 by jwilliam          #+#    #+#             */
/*   Updated: 2021/09/27 13:57:45 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index1;
	size_t	index2;

	if (little[0] == '\0')
		return ((char *)big);
	index1 = 0;
	while (big[index1] != '\0' && index1 < len)
	{
		index2 = 0;
		while (big[index1 + index2] != '\0' && little[index2] != '\0'
			&& (index1 + index2) < len
			&& big[index1 + index2] == little[index2])
		{
			index2++;
			if (little[index2] == '\0')
				return ((char *)(big + index1));
		}	
		index1++;
	}
	return (NULL);
}
