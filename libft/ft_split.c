/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:21:04 by jwilliam          #+#    #+#             */
/*   Updated: 2021/09/28 11:24:50 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	get_str_len(char const *s, char c)
{
	int		len;
	int		index;

	len = 0;
	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == c)
			index++;
		len++;
		index++;
	}
	return (len);
}

static char	*make_word(char const *s, char c)
{
	char	*word;
	int		sindex;
	int		windex;

	sindex = 0;
	windex = 0;
	while (s[sindex] != '\0' && s[sindex] != c)
		sindex++;
	word = malloc((sindex + 1) * sizeof(char));
	while (windex < sindex)
	{
		word[windex] = s[windex];
		windex++;
	}
	word[windex] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char			**str;
	int				wordcount;
	int				sindex;

	if (!s)
		return (NULL);
	str = malloc(((get_str_len(s, c)) + 1) * sizeof(char *));
	if (!str)
		return (0);
	wordcount = 0;
	sindex = 0;
	while (sindex < (int)ft_strlen(s))
	{
		if (s[sindex] != c && (s[sindex - 1] == c || sindex == 0))
		{
			str[wordcount++] = make_word((&s[sindex]), c);
		}
		sindex++;
	}
	str[wordcount] = 0;
	return (str);
}
