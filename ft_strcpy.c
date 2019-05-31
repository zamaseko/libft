/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:58:50 by zamaseko          #+#    #+#             */
/*   Updated: 2019/05/31 14:38:55 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/* this is to print out a copy of the initial string he is given. the return is the dst where the string is copied*/
char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	if (dst == NULL || src == NULL)
		return (NULL);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *k;
	char l[64] = "zandi";
	//const char m[50] = "mase";

	k = ft_strcpy(l, NULL);
	printf("%s\n", k);
	return (0);
}*/

