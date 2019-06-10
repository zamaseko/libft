/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:41:50 by zamaseko          #+#    #+#             */
/*   Updated: 2019/05/27 16:42:40 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *gstr;
	
	i = 0;
	if (!( gstr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
		while (s[i] != '\0')
		{
			gstr[i] = f(i, s[i]);
				i++;
		}
		gstr[i] = '\0';
		return (gstr);
}
