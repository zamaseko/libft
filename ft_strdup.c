/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:57:02 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/05 17:41:29 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *dup;
	char *str;

	if (!(dup = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	str = ft_strcpy(dup, s1);
	return (str);
}

/*
int main(void)
{
	char *l;
	const char *m;
	
	m = "zandile";
	l = ft_strdup(m);
	ft_putendl(l);
	return (0);
}
*/
  
