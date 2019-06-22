/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:50:39 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/22 17:00:00 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	ft_wordcount(char const *s, char c)
{
	int w;
	int i;
	int	j;

	i = 0;
	w = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			w++;
			j = 0;
			while (s[i + j] != c && s[i + j] != '\0')
				j++;
			i += j;
		}
		i++;
	}
	return (w);
}

char	**ft_strsplit(char const *s, char c)
{
	char **arr;
	int l;
	unsigned int i;
	int j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if(!(arr = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c && j < ft_wordcount(s, c))
		{
			l = 0;
			while (s[i + l] != c && s[i + l] != '\0')
				l++;
			if(!(arr[j++] = ft_strsub(s, i, l)))
				return (NULL);
			i += l;
		}
		i++;
	}
	arr[j] = NULL;
	return (arr);
}
