/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:40:17 by jwilliam          #+#    #+#             */
/*   Updated: 2021/09/28 11:23:31 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_char_match(char c, char const *set)
{
	size_t		index;

	index = 0;
	while (set[index] != '\0')
	{
		if (set[index] == c)
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*ptr;
	size_t		start;
	size_t		end;
	size_t		index;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && ft_char_match(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_match(s1[end - 1], set))
		end--;
	ptr = (char *)malloc((end - start + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	index = 0;
	while (start < end)
	{
		ptr[index] = s1[start];
		index++;
		start++;
	}
	ptr[index] = '\0';
	return (ptr);
}
