/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:42:04 by jwilliam          #+#    #+#             */
/*   Updated: 2021/09/28 11:15:16 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		sindex;
	size_t		strindex;

	sindex = 0;
	strindex = 0;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str || !s)
		return (NULL);
	while (s[sindex] != '\0')
	{
		if (sindex >= start && strindex < len)
		{
			str[strindex] = s[sindex];
			strindex++;
		}
		sindex++;
	}
	str[strindex] = '\0';
	return (str);
}
