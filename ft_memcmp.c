/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:54:06 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/14 15:30:15 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
/*{
	size_t i;
	char *str1;
	char *str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	//if (!str1 || !str2)
	//	return (NULL);
	while (str1[i] && str1[i] == str2[i] && i < n)
	{
			if (str1[i] != str2[i])
				i++;
			return (0);
	}
	str1[i] ='\0';
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
*/
{
	size_t i;
	unsigned char *str1;
	unsigned char *str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (/*str1[i] == str2[i] && */i < n)
	{
	//	if (str1[i] == str2[i])
	//		i++;
	//	return (0);
	if (str1[i] != str2[i])
		return ((int)str1[i] - (int)str2[i]);
	else
		i++;
	}
	return (0);
}
