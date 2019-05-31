/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:57:02 by zamaseko          #+#    #+#             */
/*   Updated: 2019/05/31 13:33:28 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
		count = count + 1;
	return (count);
}
char	*ft_strdup(const char *s1)
{
	char *dup;
	int i;

	i = 0;
//	dup = (char *)malloc(sizeof(char) * (strlen(s1) + 1));
	if (! s1 || ! (dup = (char *)malloc(sizeof(char) * (strlen(s1) + 1))))
		return (NULL);
	while (s1[i])
		dup[i] = s1[i];
		i++;
	return(dup);
}

int main(void)
{
	char *l;
	const char *m;
	size_t n;
	
	m = "zandile";
	n = 6;
	l = ft_strdup(m);

	printf("%s\n", l);
	return (0);
}
  
