/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:19:57 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/04 17:26:09 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	long change;
	long res;

	i = 0;
	change = 1;
	res = 0;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\n'||
			str[i] == '\0')
		i++;

	 while (str[i] == '-' || str[i] == '+')
		 if (str[i] == '-')
	 {
		 change = -1;
		 i++;
	 }
		 else if (str[i] == '+')
		 {
			 res = +1;
			 i++;
		 }
	 while (str[i] >= '0' || str[i] <= '9')
	 {
	 res = ((res * change) + (str[i] - '0'));
		 i++;
	 }
	return (res );
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
