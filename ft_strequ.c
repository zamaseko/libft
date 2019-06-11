/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:43:08 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/11 17:07:17 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
/*{
	int i;

	i = 0;
	if (s1 && !s2)
		return (0);
	while (s1[i] && s2[i])
		{
			if (s1[i] == s2[i])
				i++;
			return (1);
		}
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		return (1);
}
{
	int cmp;
	unsigned int i;

	i = 0;
	cmp = ft_strcmp(s1, s2);
	while (s1[i] && s2[i])
	{
		cmp;
		i++;
	}
	return (1);		
}*/
{
	if (!s1 || !s2)
		return (0);
	if (ft_strcmp(s1, s2) != 0)
		return (0);
	else
		return (1);
}
