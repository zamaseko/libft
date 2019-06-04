/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 17:26:44 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/04 13:20:52 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <ctype.h>

int	ft_isalpha(int c)
{
		if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int		main(void)
{
	int k;
	int c;

	c = 'A';
	k = ft_isalpha(c);
	printf("mine: %d\n", k);
	k = isalpha(c);
	printf("pc: %d\n", k);
	return (0);
}*/
