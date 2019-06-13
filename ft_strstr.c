/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:14:36 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/13 13:43:52 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
//	int k;

	i = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	if (haystack[0] == '\0')
		return (NULL);
	while (haystack[i])  /*&& (ft_strlen(haystack) >= \
		ft_strlen(needle) + i))*/
	{
		j = 0;
	//	k = i;
		while (needle[j] && needle[j] == haystack[i + j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)(haystack + i));
//			k++;
			j++;
		}
		i++;
	}
	return (NULL);
}
