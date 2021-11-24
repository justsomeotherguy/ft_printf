/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:46:56 by jwilliam          #+#    #+#             */
/*   Updated: 2021/09/08 15:56:18 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strdup(const char *str)
{
	char		*ptr;
	size_t		len;
	size_t		index;

	len = ft_strlen(str);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	index = 0;
	if (ptr == NULL)
		return (NULL);
	while (index < len)
	{
		ptr[index] = str[index];
		index++;
	}
	ptr[index] = 0;
	return (ptr);
}
