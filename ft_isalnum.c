/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:22:46 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/21 13:33:42 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int a;
	int b;

	a = ft_isalpha(c);
	b = ft_isdigit(c);
	if (a || b)
		return (1);
	else
		return (0);
}
