/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:19:57 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/03 12:07:45 by zamaseko         ###   ########.fr       */
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

	while (str[i] == ' ');
	i++;
	while (str[i] == '\t');
	i++;
	while (str[i] == '\v');
	i++;
	while (str[i] == '\n');
	 if (str[i] == '-' || str[i] == '+')
	 {
		 change = -1;
		 i++;
	 }
	return (res );
}
int main(void)
{
	int i;
	const char j;

	j = "1223";
	i = ft_atoi(j);
	ft_putstr(i);
	ft_putchar('\n');
	return (0);
}
