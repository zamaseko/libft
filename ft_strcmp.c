/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:17:30 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/05 15:53:12 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//include <unistd.h>

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}*/
int	ft_strcmp(const char *s1, const char *s2)
/*{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		s1[i] = s2[i]
		i++;
		return (0);
	}
	while (s1[i] == '\0' && s2[i] == '\0')
i	return ((unsigned char)s1- (unsigned char) s2);
}*/
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
	if(s1[i] == s2[i])
		i++;
	if (s1[i] != '\0' && s2[i] != '\0')
		i++;
	}
//	s1[i] = '\0' && s2[i] = '\0';
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*include <stdio.h>
int main(void)
{
	char k;
	const char t[50] = "Zandile";
	const char *r;

//	t = "ZandilI";
	r = "Zandi";
	k = ft_strcmp(t, r);
	ft_putstr(&k);
	ft_putchar('\n');
//	printf("mine: %d\n", k);
//	k = ft_strcmp(t, r);
//	printf("pc: %d\n", k);
	return (0);
}*/
