/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:50:39 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/24 17:53:27 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_wc(char const *s, char c)
{
	int		w;
	int		i;
	int		j;

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
		if (s[i] != '\0')
			i++;
	}
	return (w);
}

char			**ft_strsplit(char const *s, char c)
{
	char			**arr;
	int				l;
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	if (!s || (!(arr = (char **)malloc(sizeof(char *) * (ft_wc(s, c) + 1)))))
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c && j < ft_wc(s, c))
		{
			l = 0;
			while (s[i + l] != c && s[i + l] != '\0')
				l++;
			if (!(arr[j++] = ft_strsub(s, i, l)))
				return (NULL);
			i += l;
		}
		i++;
	}
	arr[j] = NULL;
	return (arr);
}
