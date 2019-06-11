/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:14:36 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/11 17:53:40 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *str2)
{
	int i;
	int j;

	i = 0;
	if ( str2[0] == '\0')
		return ((char*)str);
	if (str[0] == '\0')
		return (NULL);
	j = 0;
	while (str[i])
	{
		while (str2[j] == str[i + j])
		{
			if (str2[j - 1] == '\0')
					 j++;
				 return ((char *)str + i);
		}
		i++;
		}
		return (NULL);
}
