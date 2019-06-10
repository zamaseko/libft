/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:49:04 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/10 18:37:48 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char *mem;

	i = 0;
	mem = (char*)malloc(sizeof(char) * len);
	if (mem == NULL)
		return (NULL);
		while ((i < len) && ( src[i] && dst[i]))
		{
		(unsigned char)dst[i] = (unsigned char)src[i];
			i++;
		}
	return (dst);
}
