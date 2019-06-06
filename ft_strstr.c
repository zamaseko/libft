/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:14:36 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/06 11:03:49 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	if (haystack[i] == '\0' &&  needle[i] == '\0')
	return ((char *)haystack)
	
	j = 0;
	if (needle[i] != '\0')
	{
		if (needle[j] != '\0' && haystack[i] == needle[i])
			j++;
		if (needle[i] == '\0')
			i++;
		return ((char *)haystack)
	}
	return(NULL);
}
