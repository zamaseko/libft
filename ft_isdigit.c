/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:21:29 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/04 13:32:44 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ( '0' <= c && '9' >= c)
		return (1);
	else 
		return (0);
}

/*#include <stdio.h>
int main(void)
{
	int d;
	int f;

	d = '1';
	f = ft_isdigit(d);
	printf("mine: %d\n", f);
	f = isdigit(d);
	printf("pc: %d\n", f);
	return (0);
}
int main(void)
{
	int a;
	int b;

	a = '2';
	b = ft_isdigit(a);
	ft_putchar(b);
	ft_putchar('\n');
	return (0);
}*/
