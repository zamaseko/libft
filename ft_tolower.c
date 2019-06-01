/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:57:28 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/01 16:59:30 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int z)
{
	if ((65 <= z) && (90 >= z))
		return (z + 32);
	else
		return (z);
}

/*int main(void)
{
	int a;
	int b;

	a = 'Y';
	b = tolower(a);
	ft_putchar(b);
	ft_putchar('\n');
	return (0);
}*/
