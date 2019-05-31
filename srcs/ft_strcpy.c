/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:58:50 by zamaseko          #+#    #+#             */
/*   Updated: 2019/05/31 08:36:57 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include "libft.h"

/* this is to print out a copy of the initial string he is given. the return is the dst where the string is copied*/
char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
