/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:58:50 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/05 18:12:35 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *k;
	char l[64] = "zandi";
	//const char m[50] = "mase";

	k = ft_strcpy(l, NULL);
	printf("%s\n", k);
	return (0);
}
*/

