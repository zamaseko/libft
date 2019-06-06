/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:14:36 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/06 11:03:49 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *str2)
{
	int i;
	int j;

	i = 0;
	if (str[i] == '\0')
		return ((char *)str);
		j = 0;
		while (str[i] != '\0')
			while (str2[j] && str[i + j] == str2[j])
			{
				if (str2[j] != '\0')
					j++;
					{
						return ((char *)str + j);
					}
					i++;
			}
			return (NULL);
}




















/*{
	int i;
	int j;
	i = 0;
	if (str[i] == '\0' && str2[i] == '\0')
		return ((char *)str);
		while (str[i] != '\0')
		{
			j = 0;
			while (str2[j] != '\0' &&  str[j + i] == str2[j])		
				j++;
				if (str2[j] != '\0')
					return ((char *)str + j);
			i++;
		}
		return(NULL);
}
*/


