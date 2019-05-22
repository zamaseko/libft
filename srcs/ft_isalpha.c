/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 17:26:44 by zamaseko          #+#    #+#             */
/*   Updated: 2019/05/22 15:03:58 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalpha(int c)
{
	
	if((c <= 97 && c >= 122) || (c >= 65 && c <= 90))
		return(1);
	else
		return (0);

}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	char[r];

	r = '12abc12';
	{
		ft_putchar((char)ft_isalpha(r));
		return (0);
	}
}
