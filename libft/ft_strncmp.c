/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:27:43 by jwilliam          #+#    #+#             */
/*   Updated: 2021/09/17 11:32:13 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t len)
{
	size_t	index;

	index = 0;
	if (len == 0)
		return (0);
	while (index < (len - 1) && str1[index] != '\0' && str2[index] != '\0'
		&& str1[index] == str2[index])
		index++;
	return ((unsigned char)str1[index] - (unsigned char)str2[index]);
}
