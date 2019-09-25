/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 17:14:52 by zamaseko          #+#    #+#             */
/*   Updated: 2019/09/25 14:00:24 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int main()
{
	char *a;
//	char b;

	a = "THIS IS A TEST, DON'T PANIC";
//	b = ft_putstr(a);
	ft_putendl(*ft_strsplit(a, ' '));
	ft_putchar('\n');
	return (0);
}
