/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:46:44 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/01 17:01:15 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int z)
{
	if ((96 <= z) && (122 >= z))
		return (z - 32);
	else
		return (z);
}

/*int main(void)
{
	int a;
	int b;
	
	b = 'a';
	a = ft_toupper(b);
	ft_putchar(a);
	ft_putchar('\n');
	return (0);
}*/
