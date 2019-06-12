/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:51:32 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/12 15:05:58 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
/*{
	size_t i;
	char look;
	char *find;

	i = 0;
	look = (char)c;
	find = (char *)s;
	while (s[i] != look && i < n)
		i++;
	if (s[i] == look)
		return ((char *)s + i);
	return (NULL);
}*/
{
	size_t i;
	char *find;
	
	i = 0;
	find = (char *)s;
	while (find[i] != '\0' && find[i] != (char)c && i < n)
	{
		find[i] = (unsigned char)c;
		i++;
		return ((char *)s + i);
	}
	return (NULL);
}
/*{
	size_t i;
	unsigned char *find;
	unsigned char look;

	i = 0;
	look = (unsigned char)c;
	find = (unsigned char *)s;
	while (find[i] != '\0' && i <= n)
	{
		if(find[i] == (unsigned char)c)
		i++;
		return((char *)s);
	}
	find[i] = '\0';
	return (NULL);	
}*/
