/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:18:39 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/05 13:37:48 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
/*{
	int i;

	i = 0;
	if (s1[i] == s2[i])
		i++;
	if (s1[i] != '\0' && s2[i] != '\0' && (n - 1) > i)
		i++;	
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}*/
	
{
	size_t i;

	i = 0;
	while (s1[i] &&  s1[i] == s2[i] && n - 1 > i)

	{
		if (s1[i] == s2[i])
			i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
