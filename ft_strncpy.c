/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:03:07 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/05 14:17:03 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
		size_t i;

	i = 0;
	//if (dst == NULL || src == NULL)
		//return (NULL);
	while (src[i] && len > 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

