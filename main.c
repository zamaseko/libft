/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 16:58:22 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/23 15:24:18 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char *a;

	a = "   hello what is you name    ";
	ft_capitalize(ft_putstr(ft_strsub(a, 14, 11)));
	return (0);
}
