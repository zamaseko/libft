/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:22:46 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/04 15:50:28 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(0))
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
int main(void) 
{
	int a;
	int b;

	a = 'A';
	b = ft_isalnum(a);
	printf("%d\n", b);§
	return (0);
}*/
