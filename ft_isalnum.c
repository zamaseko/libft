/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:22:46 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/05 16:00:24 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int a;
	int b;

	a = ft_isalpha(c);
	b = ft_isdigit(c);
	if ( a || b)
		return (1);
	else 
		return (0);
}	
	
	/*{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	else
		return (0);
}*/


/*#include <stdio.h>
int main(void) 
{
	int a;
	int b;

	a = '~';
	b = ft_isalnum(a);
	printf("mine: %d\n", b);
	b = isalnum(a);
	printf("pc: %d\n", b);
//	ft_putchar(b);
	return (0);
}*/
