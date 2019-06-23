/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:47:21 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/23 13:24:30 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*fstr;

	i = 0;
	if (!s)
		return (0);
	fstr = ft_memalloc(len + 1);
	if (!fstr)
		return (NULL);
	while (i < len)
	{
		fstr[i] = s[start + i];
		i++;
	}
	fstr[i] = '\0';
	return (fstr);
}
