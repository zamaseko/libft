/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:13:14 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/11 14:29:05 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *restrict s, int c)
{
	int i;
	char look;
	char *find;

	i = ft_strlen(s);
	look = (char)c;
	find = (char *)s;
	while (s[i] != '\0' && s[i] != look)
		i--;
		if  (s[i] == look)
			return ((char *)s + i);
	return (NULL);
}

