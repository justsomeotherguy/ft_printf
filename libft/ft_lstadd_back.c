/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 20:57:32 by jwilliam          #+#    #+#             */
/*   Updated: 2021/09/21 12:11:27 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list		*add;

	if (!new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		add = ft_lstlast(*lst);
		add->next = new;
	}
}
