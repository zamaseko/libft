/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:43:58 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/04 18:22:25 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(const char *s)
{
	ft_putstr_fd(s, 1);
}

/*
int main(void)
{
	const char l;;

	l = "zandi";
	ft_putstr(l);
	return (0);
}
*/
