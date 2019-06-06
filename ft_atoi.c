/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:19:57 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/05 18:38:29 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>
//#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i;
	int change;
	int res;

	i = 0;
	change = 1;
	res = 0;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\f'||
			str[i] == '\n' || str[i] == '\v')
	i++;
	if (str[i] == '-')
	 {
		 change = -1;
		 i++;
	 }
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
	 res = ((res * 10) + (str[i] - '0'));
		 i++;
	}
	return (res * change);
}

#include <stdio.h>

/*int main(void)
{
	int i;
	const char *a;

	a = "1223";
	i = ft_atoi(a);
	printf("mine: %d\n", i);
	i = atoi(a);
	printf("pc: %d\n", i);
//	ft_putstr(i);
//	ft_putchar('\n');
	return (0);
}*/
