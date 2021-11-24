/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:02:59 by jwilliam          #+#    #+#             */
/*   Updated: 2021/09/28 11:18:59 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*str;
	int			index;
	int			index2;

	index = 0;
	index2 = 0;
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(((ft_strlen(s1) + ft_strlen(s2)) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[index] != '\0')
		str[index2++] = s1[index++];
	index = 0;
	while (s2[index] != '\0')
		str[index2++] = s2[index++];
	str[index2] = '\0';
	return (str);
}
