/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:16:30 by zamaseko          #+#    #+#             */
/*   Updated: 2019/05/27 16:17:20 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *str2, size_t len)
{
	{
	size_t i;
	size_t j;

	i = 0;
	if (str2[0] == '\0')
		return ((char*)str);
	if (str[0] == '\0')
		return (NULL);
	j = 0;
	while (str[i] && i < len)
	{
		while (str2[j] == str[i + j])
		{
			if (str[j] == '\0')
				j++;
				return ((char *)str + j);
		}
		i++;
		}
		return (NULL);
}
}

