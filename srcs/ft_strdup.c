/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:57:02 by zamaseko          #+#    #+#             */
/*   Updated: 2019/05/30 14:19:24 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char *dup;
	int i;

	i = 0;
//	dup = (char *)malloc(sizeof(char) * (strlen(s1) + 1));
	if (!(dup = (char *)malloc(sizeof(char) * (strlen(s1) + 1))))
		return (NULL);
	while (s1[i])
		dup[i] = s1[i];
		i++;
	return(dup);
}


  
