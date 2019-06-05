/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:19:57 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/05 17:33:49 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int change;
	int res;

	i = 0;
	change = 1;
	res = 0;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\n'||
			str[i] == '\f')
	i++;
	if (str[i] == '-')
	 {
		 change = -1;
		 i++;
	 }
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
	 res = ((res * 10) + (str[i] - '0'));
		 i++;
	}
	return (res * change);
}

/*int main(void)
{
	int i;
	const char a[50] = "1223";

	a = "1223";
	i = ft_atoi(a);
	ft_putchar(i);
	ft_putchar('\n');
	return (0);
}*/
