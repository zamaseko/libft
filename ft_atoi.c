/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:19:57 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/19 16:04:08 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>
//#include <stdlib.h>

int	ft_atoi(const char *str)
{
	unsigned int i;
	long change;
	long res;
	
	i = 0;
	change = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || 
		str[i] == '\f'|| str[i] == '\n' || str[i] == '\v')
		i++;
		if (str[i] == '-')
		{
			 change = -1;
			 i++;
		}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10 + str[i] - '0');
		i++;
		if (res > 2147483648 && change == -1)
			return (0);
		if (res < -2147483647 && change == 1)
			return (-1);
	}
	return (res * change);
}

//#include <stdio.h>

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
