/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:48:22 by jwilliam          #+#    #+#             */
/*   Updated: 2021/09/28 11:29:15 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int		index;

	if (!s)
		return ;
	index = 0;
	while (s[index] != '\0')
	{
		f(index, (s + index));
		index++;
	}
}
