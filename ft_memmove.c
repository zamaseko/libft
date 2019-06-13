/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:49:04 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/13 16:20:47 by zamaseko         ###   ########.fr       */
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
	if (dest == NULL && source == NULL)
		return (NULL);
	while (dest[i] > source[i] && i < len)
	{
		if (dest[i] == source[i])
			i++;
		ft_memcpy(dest, source, len);
	//	ft_strcpy((ft_memalloc(dst)), len);
	}
	return ((char *)dst);
}
