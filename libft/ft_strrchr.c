/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 10:42:01 by jwilliam          #+#    #+#             */
/*   Updated: 2021/09/27 12:08:55 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		index;

	index = ft_strlen(str);
	while (index >= 0)
	{
		if (str[index] == c)
			return ((char *)(str + index));
		index--;
	}
	return (NULL);
}
