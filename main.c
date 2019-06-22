/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamaseko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 16:58:22 by zamaseko          #+#    #+#             */
/*   Updated: 2019/06/22 12:15:28 by zamaseko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main()
{
	char *a;

	a = "   hello what is you name    ";
	ft_capitalize(ft_putstr(ft_strsub(a, 14, 11)));
	return (0);
}
/*char	ft_capitalize(char c)
{
	ft_toupper(ft_substr(a, 14, 11));
}*/
