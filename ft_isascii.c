/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:25:00 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/05 16:11:52 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ( 0 <= c && 127 >= c)
		return (1);
	else 
		return (0);
}

/*#include <stdio.h>
int main(void)
{
	int a;
	int b;

	a = 178;
	b = ft_isascii(a);
	printf("mine: %d\n", b);
	b = isascii(a);
	printf("pc: %d\n" , b);
	return (0);
}*/
