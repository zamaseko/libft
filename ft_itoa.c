/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:51:21 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/18 17:52:41 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *str;
	int i;
	int res;

	res = 0;
	i = ft_strlen(str) + 1;
	str = (char *)malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	while (n)
	{
		str[i] = n % 10 + '0';
	}
	return (str);
}
