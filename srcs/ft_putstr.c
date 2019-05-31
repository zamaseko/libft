/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:43:58 by zamaseko          #+#    #+#             */
/*   Updated: 2019/05/31 13:43:05 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
#include <string.h>
#include <unistd.h>
/*
void	ft_putstr(char const *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putstr(&s[i]);
		i++;
	}
}*/

void	ft_putstr(const char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}
int main(void)
{
	const char l;;

	l = "zandi";
	ft_putstr(l);
	return (0);
}
