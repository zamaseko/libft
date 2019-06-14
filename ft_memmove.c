/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:49:04 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/14 17:18:41 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char *dest;
	char *source;

	i = 0;
	dest = (char *)dst;
	source = (char *)src;
	if (!dest && !source)
		return (NULL);
	while (dest[i] != source[i] && i < len)
	{
		if (dest < source)
			i--;
		if (dest[i] == source[i])
		 	i++;
		ft_memcpy(dest, source, len);
	}
	return ((char *)dst);
}
