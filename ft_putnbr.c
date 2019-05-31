/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 17:25:09 by zamaseko          #+#    #+#             */
/*   Updated: 2019/05/31 09:26:16 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	ft_putchar(char c);*/

void	ft_putnbr(int n)
{
	if (n <0) 
	/* the largst number an in can pass is 10 digits long and this is a number a variable can hold.*/
	{
		ft_putchar('-');
		n = -n; 			/* the int is checked to see if it is a negative number, the ft_putchar('-') is used if the number is negative
							and it displays the - sign  to the standard output. */
}
	if (n >= 10)
	{
		ft_putnbr(n / 10); 
		ft_putnbr(n % 10);
		
		/*then check if te number is greater or equal to 10 and if it is the is broken to its individual digit. Then we will either divide 		by 10 this is to reach the first number of  the initial integer. modulus will be used to convert the number value to char value*/
	}
		if (n < 10)
	{
		ft_putchar(n + 48);
	}
}
